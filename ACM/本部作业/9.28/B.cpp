#include <bits/stdc++.h>
using namespace std;
double pi=3.1415926535897932384626433;
double r,w,ans;

int main()
{
	while(cin>>r>>w)
	{
		ans=r*r*pi*w*3.0;
		printf("%.6lf\n",ans);
	}
	return 0;
}
