#include<bits/stdc++.h>
using namespace std;
int main()	
{
	int a,b,c,i,d,e;
	d=0;
	c=0;
	cin>>a;
	for(i=1;i<=a;i++)
	{
		cin>>b>>c;
		if(b<=140 && b>=90 && c>=60 && c<=90)
		{
			d=d+1;
			if(e<d)	
			e=d;
		}
		else
			d=0;
	} 	
	cout<<e;	 
	return 0;
}
