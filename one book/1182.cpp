#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p=0,q=0;
    double d,temp;
    char s[20];
    double a[50],b[50];    
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s>>d;
        if(strcmp(s,"male")==0) a[p++]=d;
        else b[q++]=d;
    }
    sort(a,a+p);
    sort(b,b+q); 
    for(int i=0;i<p;i++)
        printf("%.2lf ",a[i]);
    for(int i=q-1;i>=0;i--)
        printf("%.2lf ",b[i]);
    return 0;
}