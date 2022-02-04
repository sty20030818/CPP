#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    int a[101]={0};
    int n,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>b;
        a[b+50]++;
    }
    bool flag=false;
    for(int i=0;i<100;i++)
    {
        if(a[i]>=n/2)
        {
            flag=true;
            cout<<i-50<<endl;
        }
    }
    if(!flag) cout<<"no";
    return 0;
}