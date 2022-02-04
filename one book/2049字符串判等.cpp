#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int cnt1,cnt2; 

int main()
{
	string s,t;
	getline(cin,s);
	getline(cin,t);
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==' ') continue;
		s[cnt1]=s[i];
		cnt1++;
	}
	for(int i=0;i<t.size();i++)
	{
		if(t[i]==' ') continue;
	  	t[cnt2]=t[i];
		cnt2++;
	}
	if(cnt1!=cnt2)
	{
		cout<<"NO";
		return 0;
	}
	for(int i=0;i<cnt1;i++)
	{
		if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
		if(t[i]>='A'&&t[i]<='Z') t[i]+=32;
		if(t[i]!=s[i])
		{
			cout<<"NO";
			return 0;
		}
	} 
	cout<<"YES";
	return 0;
}

