#include<bits/stdc++.h>
using namespace std;
#define N 100
string a;

int main()
{
	getline(cin,a);
	int n=a.size(); 
	for(int i=0;i<n;i++) 
	{
		if(a[i]>='a' && a[i]<='z') 
			cout<<char(a[i]-32); 
		else
			cout<<a[i]; 
	}
	return 0; 
}