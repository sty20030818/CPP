#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[5];
    bool flag1=false,flag2=false;
    int ans1=0,ans2=0;
    while(n--)
    {
        cin >> a[0] >> a[1] >> a[2] >> a[3];
        if(a[1] == (a[0] + a[2])) flag1=true;
        if(a[3] == (a[0] + a[2])) flag2=true;
        if(flag1 || flag2)
            if(!(flag1 && flag2))
                if(flag1) ans2++;
                else ans1++;
        flag1 =flag2 =false;
    }
    cout << ans1 <<" "<< ans2;
    return 0;
}