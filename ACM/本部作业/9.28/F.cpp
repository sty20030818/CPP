#include <bits/stdc++.h>
using namespace std;
int t,n,x,y,ans;

int main()
{
	cin>>t;
	for(int i=0;i<t;i++)
	{
		ans=0;
		cin>>n>>x>>y;
		if(x>=y*3)
		{
			if(n>=y)
			{
				ans+=3;
				n-=x;
				ans+=n/y;
			}
		}
		else if(n>=x)
		{
			while(n>=x)
			{
				ans+=3;
				n-=x;
			}
			ans+=n/y;
		}
		cout<<ans<<endl;
	}
	return 0;
}


