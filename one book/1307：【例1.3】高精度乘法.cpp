#include <stdio.h>
#include <string.h>
char s[10000],ss[10000];
int a[10000],b[10000],c[10000];
int len,lenn;

void cheng_gao()
{
	len = strlen(s);
	lenn = strlen(ss);
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));	
	for (int i = 0 ; i < len ; i++)
		a[len - i - 1] = s[i] - '0';
	for (int i = 0 ; i < lenn ; i++)
		b[lenn - i - 1] = ss[i] - '0';
		
	memset(c,0,sizeof(c)); 
	for (int i = 0 ; i < len ; i++)
		for (int j = 0 ; j < lenn ; j++)
			c[i + j] += a[i] * b[j];
		
	int l = len + lenn - 1;
	for (int i = 0 ; i < l ;i++)
	{
		c[i + 1] += c[i] / 10;
		c[i] %= 10;
	}
	if (c[l] > 0) l++;
	while (c[l - 1] >= 10)
	{
		c[l] = c[l - 1] / 10;
		c[l - 1] %= 10;
		l++;
	}
	while (c[l - 1] == 0 && l > 1) 
		l--;
	for (int i = l - 1; i >= 0 ; i--)
		printf("%d",c[i]);
}


int main()
{
    scanf("%s%s",s,ss);
    cheng_gao();
	return 0;
}


