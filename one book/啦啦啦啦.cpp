#include<bits/stdc++.h>
using namespace std;
int main()
{
	int count,j=1,a[400];
	string s;
	getline(cin,s);
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==' ')
		{
			if(count>0)
			{
				a[j]=count;
				j++;
				count=0;
			}
			else continue;
		}
		if(s[i]!=' ') count++;
	}
	if(count>0) a[j]=count;
	else j=j-1;
//	cout<<j<<endl;
	for(int i=1;i<=j;i++)
	{
		if(i!=j) cout<<a[i]<<",";
		else cout<<a[i];
	}
	return 0;
}

