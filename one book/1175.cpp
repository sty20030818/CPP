#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;
int len;
int a[1001],b[1001];
char s[1001];

void chu_di()
{
	int yu=0;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	len=strlen(s);
	for(int i=0;i<=len-1;i++)
		a[i+1]=s[i]-'0';
	for(int ii=1;ii<=len;ii++)
	{
		b[ii]=(yu*10+a[ii])/13;
		yu=(yu*10+a[ii])%13;
	}
	int lenb=1;
	while(b[lenb]==0&&lenb<len)
		lenb++;
	for(int j=lenb;j<=len;j++)
		printf("%d",b[j]);
	printf("\n%d\n",yu);       
}

int main()
{
    cin>>s;
    chu_di();
    return 0;
}