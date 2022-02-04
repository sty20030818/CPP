#include<bits/stdc++.h>
using namespace std;
int x;
	
int main()
{
	scanf("%d",&x);
	int a=0,b=0,c=x/4,d=x%4;
	if(d==1) c--,b++;
	else if(d==2) c--,a++;
	else if(d==3) c-=2,a++,b++;
	printf("%d %d %d",a,b,c);
	return 0;
}
