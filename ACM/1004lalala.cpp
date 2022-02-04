#include <iostream>
#include <cmath>
#include <algorithm> 
using namespace std;
int a[10005],b[10005];
int n,qty;

int main()
{
    cin>>n;
    while (n--)
	{
	    cin>>qty;
	    for(int i=0;i<qty;i++)
		{
	        cin>>a[i];
	        b[i]=a[i];
	    }
		sort(a,a+qty);
	    bool flag=true;
		for(int i=1;i<qty;i++)
	    {
	    	if(a[i]%a[0]!=0 && a[i]!=b[i])
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
