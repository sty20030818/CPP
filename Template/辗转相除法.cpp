#include<iostream>
using namespace std;

int  yang(int a,int b)
{
	if(a%b==0) return  b;
	else yang(b,a%b);
}

int main()
{
	int a,b;
	cin>>a>>b;
	cout<<yang(a,b);
	return 0;
}