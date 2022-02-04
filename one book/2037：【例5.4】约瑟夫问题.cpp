#include<bits/stdc++.h>
using namespace std;
int n,m,f=0,t=0,s=0;
int a[1005];

int main()	
{
    scanf("%d%d",&n,&m);
    while(f!=n)
    {
    	t++;
    	if(t==n+1)
    		t=1;
    	if(a[t]==0)
    		s++;
    	if(s==m)
    	{
    		s=0;
    		printf("%d ",t);
    		a[t]=1;
    		f++;
		}
	}
	return 0;  
}
