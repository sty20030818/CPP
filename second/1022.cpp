#include <iostream>
using namespace std;

int main()
{
    int a,b,d,i=0;
    int ans[101];
    int add;
    cin >> a >> b >> d;
    add=a+b;
    while(add)
    {
        ans[i]= add % d;
        i++;
        add /= d;
    }
    if(a+b)
    {
        for(int j=i-1;j>=0;j--)
            cout << ans[j];
    }
    else cout << "0";
    return 0;
}