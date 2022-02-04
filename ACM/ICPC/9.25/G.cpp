#include<stdio.h>
int n,t,a[100005],b[100005];
int main()
{
	int x1=0,x2=0;
	long long x=1,y=1;
	scanf("%d%d",&n,&t);
	for(int i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
		x1+=a[i];
	}
	if(x1>t)printf("0\n");
	else if(x1<t)printf("infinity\n");
	else
	{
		for(int i=0;i<n;i++)
		{
			if(a[i]>0){
				for(int j=1;j<a[i];j++)
				{
					b[i]*=a[i];
				}
				x*=b[i];
			}
			else if(a[i]==0)
			b[i]=0;
			else
			{
				a[i]=-a[i];
				for(int j=1;j<a[i];j++)
				{
					b[i]*=a[j];
				}
				y*=b[i];
			}
		}
		if(y==0)
		printf("%lld",x);
		else if(x%y==0)
		printf("%lld\n",x/y);
		else
		printf("%lld/%lld",x,y);
	}
} 
