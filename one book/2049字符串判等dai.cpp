#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

int main()
{
	string s1,s2,s3,s4;
	int a,b=0;
	getline(cin,s1);
	getline(cin,s2);
	for(int i=0;i<s1.size();i++)
	{
		if(s1[i]=' ') continue;
		else
		{
			if('a'<=s1[i]&&s1[i]<='z')
			{
				s1[i]=s1[i]-32;
			}
			s3[a]=s1[i];
			a++;
		}
	}
	for(int i=0;i<s2.size();i++)
	{
		if(s2[i]=' ') continue;
		else
		{
			if('a'<=s2[i]&&s2[i]<='z')
			{
				s2[i]=s2[i]-32;
			}
			s4[b]=s2[i];
			b++;
		}
	}
	if(s3.size() != s4.size()) cout<<"NO";
	for(int i=0;i<s3.size();i++)
		if(s3[i]!=s4[i])
		{
			cout<<"NO";
			return 0;
		}
	cout<<"YES";
	return 0; 
}
