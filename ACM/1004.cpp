#include <iostream>
#include <cmath>
#include <algorithm> 
using namespace std;

int a[10005],b[10005];

int main()
{
	int t,n,minn;
	cin>>t;
	while(t--)
	{
		minn=0x7fffffff; 
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			minn=min(minn,a[i]);
			b[i]=a[i];
		}
		sort(b+1,b+1+n);
		bool flag=true;
		for(int i=1;i<=n;i++)
		{
			if(a[i]%minn!=0 && a[i]!=b[i])
			{
				cout<<"NO"<<endl;
				flag=false;
				break;
			}
		}
		if(flag) cout<<"YES"<<endl;
	}
	return 0;
}
//3
//1
//8
//6
//4 3 6 6 2 9
//5
//7 5 2 2 4
