#include<cstdio>
using namespace std;
int n,ans;

int f(int m)
{
	if(m<=2) return 1;
	return f(m-1)+f(m-2);
}
int main()
{
	scanf("%d",&n);
	if(n==1) printf("0");
	if(n==2||n==3)
		printf("1");
	else
		printf("%d",f(n-1));
	
	return 0;
}


