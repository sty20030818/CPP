#include <bits/stdc++.h>
using namespace std;
long long a,da,b,db;
int flaga,flagb;
long long ansa=0,ansb=0;

int main()
{
    cin>>a>>da>>b>>db;
    while(a>0)
    {
        flaga=a%10;
        a/=10;
        if(flaga==da)
            ansa=10*ansa+flaga;
    }

    while(b>0)
    {
        flagb=b%10;
        b/=10;
        if(flagb==db)
            ansb=10*ansb+flagb;
    }
    cout<<ansa+ansb;
    return 0;
}