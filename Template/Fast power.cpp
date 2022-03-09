#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;
 
/**
 * 普通的求幂函数
 * @param base 底数
 * @param power  指数
 * @return  求幂结果的最后3位数表示的整数
 */
typedef long long ll;

ll normalPower(ll base, ll power)
{
    ll result = 1;
    for (int i = 1; i <= power; i++)
    {
        result = result * base;
        result = result % 1000;
    }
    return result % 1000;
}

ll fastPower(ll base, ll power)
{
    ll result = 1;
    while (power > 0)
    {
        if (power % 2 == 0)
        {
            //如果指数为偶数
            power = power / 2;//把指数缩小为一半
            base = base * base % 1000;//底数变大成原来的平方
        }
        else
        {
            //如果指数为奇数
            power = power - 1;//把指数减去1，使其变成一个偶数
            result = result * base % 1000;//此时记得要把指数为奇数时分离出来的底数的一次方收集好
            power = power / 2;//此时指数为偶数，可以继续执行操作
            base = base * base % 1000;
        }
    }
    return result;
}

ll fastfastPower(ll base, ll power)
{
    ll result = 1;
    while (power > 0)
    {
        if (power % 2 == 1)
        {
            result = result * base % 1000;
        }
        power = power / 2;
        base = (base * base) % 1000;
    }
    return result;
}

ll fastfastfastPower(ll base, ll power)
{
    ll result = 1;
    while (power > 0)
    {
        if (power & 1)//此处等价于if(power%2==1)
        {
            result = result * base % 1000;
        }
        power >>= 1;//此处等价于power=power/2
        base = (base * base) % 1000;
    }
    return result;
}

int main()
{
    std::ios::sync_with_stdio(false);
    clock_t start, finish;
    //clock_t为CPU时钟计时单元数
    ll base, power;
    cin >> base >> power; 
    start = clock();
    //clock()函数返回此时CPU时钟计时单元数
    cout << normalPower(base, power) << endl;
    finish = clock();
    //clock()函数返回此时CPU时钟计时单元数
    cout << "the time1 cost is" << double(finish - start)  / CLOCKS_PER_SEC <<endl;
    
    start = clock();
    cout << fastPower(base, power) << endl;
    finish = clock();
    cout << "the time2 cost is" << double(finish - start) / CLOCKS_PER_SEC <<endl;
    
    start = clock();
    cout << fastfastPower(base, power) << endl;
    finish = clock();
    cout << "the time3 cost is" << double(finish - start) / CLOCKS_PER_SEC <<endl;
    
    start = clock();
    cout << fastfastfastPower(base, power) << endl;
    finish = clock();
    cout << "the time4 cost is" << double(finish - start) / CLOCKS_PER_SEC <<endl;
    //finish与start的差值即为程序运行花费的CPU时钟单元数量，再除每秒CPU有多少个时钟单元，即为程序耗时
    return 0;
 
}