#include<bits/stdc++.h>
int a,b,c;
int main()
{
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			if(b>c) printf("%d %d %d",a,b,c);
			else printf("%d %d %d",a,c,b);
		}
		else printf("%d %d %d",c,a,b);
	}
	else
	{
		if(a>c) printf("%d %d %d",b,a,c);
		else
		{
			if(b>c) printf("%d %d %d",b,c,a);
			else printf("%d %d %d",c,b,a);
		}
	}
    return 0;
}

