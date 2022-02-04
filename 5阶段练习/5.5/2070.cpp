#include<bits/stdc++.h>
using namespace std;
int a,ans;
    
int main()
{
    scanf("%d",&a);
    ans=a%10*100+a/100+a/10%10*10;
    printf("%d",ans);
	return 0;
}