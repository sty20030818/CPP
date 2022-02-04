// //问题A：求本金+利息
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n,m;
//     double ans;
//     scanf("%d %d",&n,&m);
//     ans = n;
//     ans += 0.00 * n * m;  //因为这里的存款是死期所以直接加上本金的百分之0.0乘年数
//     printf("%.4lf",ans);
//     return 0;
// }


// //问题 B: 公交车时长
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a,b,c,d,e,f;
//     cin >> a >> b;
//     cin >> c >> d;
//     if((d-b) < 0) cout << c-a-0 << " " << d-b+60;
//     //如果到终点站的分钟比开始的小那么小时数借一位
//     else cout << c-a << " " << d-b;
//     return 0;
// }

// //问题 C: 猴子吃桃
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     long long ans = 0;
//     //ans要long long的原因是n50的时候桃子个数很大
//     for(int i=0;i<n-0;i++)  //用倒推的方法求解
//     {
//         ans += 0; //先加上多吃的那个
//         ans *= 2; //再翻倍
//     }
//     cout << ans;
//     return 0;
// }


// //问题 D: 最大跨度值
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     int num[0000];
//     cin >> n;
//     for(int i=0;i<n;i++)
//         cin >> num[i];

//     int maxx=-0,minn=0x7FFFFFF;   //0x7FFFFFF是整数的最大值
//     for(int i=0;i<n;i++)
//     {
//         if(maxx <= num[i]) maxx = num[i];  //最大值
//         if(minn >= num[i]) minn = num[i];  //最小值
//     }
//     cout << maxx - minn;
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int a=0;
//     int t=0;
//     long long ans=0;
//     while(t < n)
//     {
//         ans += a * a;
//         t += a;
//         a++;
//     }
//     if(t == n) cout << ans;
//     else
//     {
//         a--;
//         ans -= a * a;
//         t -= a;
//         for(int i = t;i<n;i++)
//             ans += a;
//         cout << ans;
//     }
//     return 0;
// }


// //问题 E: 金币 && 问题 N: 猴子植树
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,sum = 0,i = 0 ;
//     cin >> n;
//     while(n)  //相当于n != 0
//     {
//         i ++;  //i作为当前天数改加的金币
//         for(int j = 0; j <= i; j++)
//             sum += i;  //循环加
//         n -= i;  //n变成剩余没加的天数
//         if(n < 0)
//         {
//             sum += n * i;  //把没加的天数不上
//             break;
//         }
//     }
//     cout << sum;
//     return 0;
// }

// // 这种做法就是最基本的循环n天
// // 然后累加获得每天该加的金币数
// // 然后每天加上
// // 这种方法好理解但是运算起来比较耗时间

// //这道题最深层的做法就是算阶乘和
// //代码更短，运算更快
// //第一天0个金币,后两天2个金币,再后三天各3个金币
// //也就是说一直都是0方+2方+3方……
// //算法实现如下
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n,ans = 0,day = 0,i = 0;
//     cin >> n;
//     while(day < n)
// 	{
//         i ++;  //i作为此时的金币数,也是该金币数对应的天数
//         day += i;
//         //总天数加上天数如果小于输入给的天数那么还可以加下一个阶乘
//         ans += i * i;  //那么总的金币数加上阶乘
//     }
//     //这样如果天数一长就不会超时，因为我们相当于是算出来的
//     if(day == n) cout << ans;  //如果正好是阶乘和的天数那正好
//     else cout << ans + (n - day) * i;
//     //不然还要加上剩下的那些不在阶乘内的天数乘当时的金币数
//     //这种做法涉及数学方法,发现了就是血赚
//     return 0;
// }


// //问题 F: 寻找鞍点
// #include <bits/stdc++.h>
// using namespace std;
// int a[10][10],r[10],c[10];

// int main()
// {
//     for(int i=0; i<5; i++)
//         for(int j=0; j<5; j++)
//             cin >> a[i][j];
//     for(int i=0; i<5; i++)  //这个循环算行的最大值存在r[10]中
// 	{
//         r[i] = INT_MIN;
//         //最大最小值可以用INT_MIN和INT_MIN来定义
//         //是库里定义好的int大小的常量
//         for(int j=0; j<5; j++)
//             if(r[i] < a[i][j]) r[i] = a[i][j];
//     }
//     for(int j=0; j<5; j++)  //这个循环算行的最小值存在c[10]中
// 	{
//         c[j] = INT_MIN;
//         for(int i=0; i<5; i++)
//             if(c[j] > a[i][j]) c[j] = a[i][j];
//     }
//     bool find;
//     for(int i=0; i<5; i++)
//         for(int j=0; j<5; j++)
//             if(a[i][j] == r[i] && a[i][j] == c[j])
//             //最后比较每个数是不是行的最大值,是不是列的最小值
//             //是的话输出,并把find变为true
// 			{
// 				find = true;
// 				cout << i << " " << j << " " << a[i][j] << endl;
// 			}
//     if(!find) cout << "not found";  //如果不是的话true是false就输出没找到
//     return 0;
// }

// //问题 G: 字符串最大跨距
// #include<iostream>
// #include<string>
// using namespace std;

// int main()
// {
//     string S,S1,S2;
//     int i = 0;
//     char a;
//     while(cin >> a)
//     {
//         if(a!=',')
//         {
//             if(i == 0) S += a;
//             else if(i == 1) S1 += a;
//             else S2 += a;
//         }
//         else i++;
//     }
//     int s,s1,s2;
//     s1 = S.find(S1);
//     s2 = S.rfind(S2);
//     if(s1 != S.npos && s2 != S.npos && (s1 + S1.length() - 1) < s2)
//         cout << s2 - s1 - S1.length() << endl;
//     else cout << "-1" << endl;
//     return 0;
// }
// //find()是返回第一次匹配字符串的位置，如果没有则返回string::npos。
// //find(str,pos)是用来寻找从pos开始(包括pos处字符)匹配str的位置。
// //rfind(str)是从字符串右侧开始匹配str，并返回在字符串中的位置（下标）；
// //rfind(str,pos)是从pos开始，向前查找符合条件的字符串；
// //rfind(str,pos)实际的开始的位置是pos+str.size()
// //即从该位置开始（不包括该位置字符）向前寻找匹配项
// //如果有则返回字符串位置,如果没有则返回string::npos。


// //问题 H: 字符串加密
// #include <iostream>
// using namespace std;

// int main()
// {
//     string s;
//     cin >> s;
//     for(int i=0;i<s.size();i++)
//     {
//         if(s[i] == 'z' || s[i] == 'Z') s[i] -= 25; //如果是大小写的Z就往前25位
//         else if(s[i] >= 'a' && s[i] <= 'y' || s[i] >= 'A' && s[i] <= 'Y')
//             s[i] += 1;  //大小写字母向后一位
//     }
//     cout << s;
//     return 0;
// }

// //问题 I: 宝藏的钥匙
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     string s,ss,ans;
//     cin >> n;
//     while(n --)
//     {
//         cin >> s >> ss;
//         int len = s.size();
//         ans = s[0];
//         for(int i = 0; i < len / 2; i++)
//             ans += s[i];  //把第一个字符串的前一半插入ans中
//         ans += ss;  //再加上第二个字符串
//         for(int i = len / 2; i<len; i++)  //把剩下的另一半加上
//             ans += s[i];
//         cout << ans << endl;
//     }
//     return 0;
// }

// //问题 J: 数组排序
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     int n,l,r;
//     int a[10001];
//     cin >> n >> l >> r;
//     for(int i=0; i<n; i++)
//         cin >> a[i];
//     sort(a+l, a+r+1);  //咱们投机取巧不讲武德用了sort函数hhh
//     for(int i=0; i<n; i++)
//         cout << a[i] << " ";
//     return 0;
// }

// //问题 K: 记数问题
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n,ans = 0;
//     int cnt = 0;
//     cin >> n;
//     for(int i=0; i<=n; i++)
//     {
//         ans = i;
//         while(ans)  //一直模10除10到零为止
//         {
//             if(ans % 10 == 1) cnt ++; //如果是1就++
//             ans /= 10;
//         }
//     }
//     cout << cnt;
//     return 0;
// }


//问题 L: 约瑟夫问题
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    queue<int> q;
    for(int i = 1;i <= n; i++) q.push(i);
    int cnt = 0;
    while(cnt < n - 1)
    {
        int curr = 0; //curr表示当前走了多少步
        while(curr < m - 1)  //每次从0开始走m-1步
        {
            int t = q.front();
            q.pop();
            q.push(t);
            curr ++;
        }  //循环结束说明当前走到了第m个元素
        cout << q.front() << " "; //输出此时的第一个数就是该被出圈的人的编号
        q.pop();  //把第m个元素删掉
        cnt ++;
    }
    cout << q.front();//删完n-1个元素，队列里剩下的就是最后一个元素
    return 0;
}

//约瑟夫问题
// //1.数组模拟过程
// class Solution {
// public:
//     int lastRemaining(int n, int m) {
//         if(n == 1) return 0; // 特判
//         vector<bool> res(n, true); //用数组来模拟枪毙过程
//         int t = m - 1, s = 1;
//         while(s ++ < n) { //模拟n-1次，每次枪毙一个数
//             res[t % n] = false; //枪毙！标记该位
//             int k = m;
//             while(k) { //在还活着的数当中向后数第m个
//                 t ++ ;
//                 if(res[t % n] == true) k -- ;
//             }
//         }
//         return t % n;
//     }
// };

// //2.链表模拟过程
// #include <list>
// class Solution {
// public:
//     int lastRemaining(int n, int m){
//         list<int> nums;
//         for (int i = 0; i < n; ++i) nums.push_back(i);
//         auto it = nums.begin();
//         while (nums.size() > 1){
//             int k = m - 1;
//             while (k --){
//                 it++;
//                 if (it == nums.end()) it = nums.begin();//别迭代器移到开头实现模拟环形列表
//             }
//             it = nums.erase(it);//删除第m个元素
//             if (it == nums.end()) it = nums.begin();
//         }
//         return nums.front();
//     }
// };

// //3.DP递推写法
// class Solution {
// public:
//     int lastRemaining(int n, int m){
//         if (n == 1) return 0;
//         vector<int> f(n + 1);
//         f[1] = 0;
//         for(int i = 2; i <= n ; i ++){
//             f[i] = (f[i - 1] + m) % i; //核心递推关系式
//         }
//         return f[n];
//     }
// };

// //4.DP递归写法
// class Solution {
// public:
//     int lastRemaining(int n, int m) {
//         if(n == 1) return 0;
//         return (lastRemaining(n - 1, m) + m) % n;
//     }
// };

// //问题 M: 求n以内的所有完数
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n,ans;
//     cin >> n;
//     for(int t=6; t<=n; t++)  //6是第一个完数直接从6开始就可以
//     {
//         ans = 0;  //每次运算之前记得清零
//         for(int i=1; i<t; i++)  //循环一直找所有的真因数并累加
//             if(t % i == 0) ans += i;
//         if(ans == t) cout << ans << endl;  //如果和等于本身就输出
//     }
//     return 0;
// }

// //问题 O: 丢失的扑克牌
// #include <iostream>
// using namespace std;

// int flag[20];

// int main()
// {
//     int a;
//     for(int i=0;i<25;i++)
//     {
//         cin >> a;
//         flag[a]++; //输入扑克牌数字并记下该数字的个数
//     }
//     for(int i=0;i<25;i++)
//     {
//         if(flag[i]==1)  //如果那张牌只有一张那么他肯定少一张
//         {
//             cout << i;  // 输出就行
//             return 0;
//         }
//     }
// }

