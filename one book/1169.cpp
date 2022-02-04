#include <bits/stdc++.h>
using namespace std;
char s[10100],ss[10100];
int a[10100],b[10100];
int len; 

void jian()
{
    int l1 =strlen(s);
    int l2 = strlen(ss);
    int flag = 0;
    memset(a,0,sizeof(a));       
    memset(b,0,sizeof(b));
    if (l1<l2||(strcmp(s,ss)<0&&l1==l2))
    {
        flag=1;
        for (int i=l2-1;i>=0;i--)
            a[l2-i-1]=ss[i]-'0';
        for (int i=l1-1;i>=0;i--)
            b[l1-i-1]=s[i]-'0';
    }
    else
    {
        for (int i=l1-1;i>=0;i--)
		    a[l1-i-1]=s[i]-'0';
	    for (int i=l2-1;i>=0;i--)
		    b[l2-i-1]=ss[i]-'0';
    }
    if (l1>l2) len=l1;
    else len=l2; 
    for (int i=0;i<len;i++)
    {
        a[i]=a[i]-b[i];
        if (a[i] < 0)
        {
            a[i+1]-=1;
            a[i]+=10;          
        }
    }
    while (a[len-1]==0&&len>1) len--;
    if (flag==1) printf("-");
}

int main()
{
	scanf("%s%s",s,ss);
    jian();
    for(int i=len-1;i>=0;i--)
		printf("%d",a[i]);
	return 0;
}