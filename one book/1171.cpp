#include <bits/stdc++.h>
using namespace std;
char str[101];
int len; 

bool divide(int x)
{
	int mod=(str[0]-'0')%x;
	for(int i=1;i<len;i++)
		mod=(mod*10+(str[i]-'0'))%x;
	return mod;
}

int main()
{
	scanf("%s",str);
	len=strlen(str);
	bool flag=false;
	for(int i=2;i<=9;i++)
	{
		if(divide(i)==false)
		{
			flag=true;
			printf("%d ",i);
		}
	}
	if(flag==false) printf("none"); 
	return 0;
}

