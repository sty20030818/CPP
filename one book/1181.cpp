#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[20],b[20];
    int d,m=0,n=0,temp,t=10;
    while(t--)
    {
        cin>>d;
        if(d%2==1)
            a[m++]=d;
        else 
            b[n++]=d;
    }
    sort(a,a+m);
    sort(b,b+n); 
    for(int i=m-1;i>=0;i--)
        cout<<a[i]<<" ";
    for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
    cout<<endl;
    return 0;
}