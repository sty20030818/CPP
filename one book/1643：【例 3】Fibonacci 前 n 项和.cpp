#include<cstdio>
#include<cstring>
using namespace std;

int n,a;
long long ans;
long long h[200000000];

void f(int m)
{
	if(h[m]!=-1) return;
	h[m]=0;
	f(m-1);
	h[m]=( h[m-1] + h[m-2] ) % a;
}
int main()
{
	memset(h,-1,sizeof(h));
	h[1]=h[2]=1;
	scanf("%d %d",&n,&a);
	f(n); 
//	for(int i=1;i<10;i++)
//	
//		printf("%d\n",h[i]);
//	}
	for(int i=1;i<=n;i++)
	{
		ans+=h[i];
		ans=ans%a;
//		printf("ans=%d\n",ans);
	}
	printf("%d",ans%a);
	return 0;
}
