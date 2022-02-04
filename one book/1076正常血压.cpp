#include<bits/stdc++.h>
using namespace std;
int a,b,n;
int maxx,cnt;

int main()
{
    scanf("%d",&n);
    maxx=0;
    cnt=0;
	for(int i=1;i<=n;i++)
	{
		scanf("%d %d",&a,&b);
        if(90<=a && a<=140 && 60<=b && b<=90)
		{
            cnt++;
            if(cnt>maxx) maxx=cnt;
        }
        else cnt=0;
    }
    printf("%d",maxx);
    return 0;
}
