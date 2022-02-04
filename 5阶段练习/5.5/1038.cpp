#include<bits/stdc++.h>
using namespace std;
int n,x,y,ans;

int main()
{
    scanf("%d %d %d",&n,&x,&y);
    int a=y%x;
	if(y<=x) ans=n-1;
	else
	{
		if(a==0) ans=n-y/x;
		else ans=n-y/x-1;
	}
	if(ans<0) ans=0; 
	printf("%d",ans);
    return 0;
}