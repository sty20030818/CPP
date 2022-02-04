#include <bits/stdc++.h>
using namespace std;
string s;
int a[11];
int main()
{
    cin>>s;
    int len=s.length();
    for(int i=0;i<len;i++)
        a[s[i]-'0']++;
    for(int i=0;i<11;i++)
        if(a[i]>0) printf("%d:%d\n",i,a[i]);
    return 0;
}