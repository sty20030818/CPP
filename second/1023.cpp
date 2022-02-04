#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,flag;
    int a[20];
    for(int i=0 ; i<10 ; i++)
        cin >> a[i];
    for(int i=1 ; i<10 ; i++)
        if(a[i] != 0)
        {
            flag=i;
            break;
        }
    cout<<flag;
    a[flag]-=1;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<a[i];j++)
        {
            cout<<i;
        }
    }
    return 0;
}
