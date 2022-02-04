#include<bits/stdc++.h>
using namespace std;
int a,b,n,ans;

int main()
{
    scanf("%d %d %d",&a,&b,&n);
    ans=(b-a)*(n-1)+a;
	printf("%d",ans);
    return 0;
}