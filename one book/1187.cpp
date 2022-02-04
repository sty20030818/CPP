#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    int a[30]={0};
    int len,maxx=-1,j;
    char str[1100];
    cin>>str;
    len=strlen(str);
    for(int i=0;i<len;i++)
        a[str[i]-'a']++;

    for(int i=0;i<26;i++)
        if(a[i]>maxx)
        {
            j=i;
            maxx=a[i];
        }

    cout<<char('a'+j)<<" "<<maxx<<endl;
    return 0;
}