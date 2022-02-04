#include<bits/stdc++.h>
using namespace std;
char s1[200],s2[200];

int main()
{
	scanf("%s %s",s1,s2);
	int n1=strlen(s1),n2=strlen(s2);
	if(n1>n2) swap(s1,s2);
	n1=strlen(s1),n2=strlen(s2);
	int j=0,t=0;
	for(int i=0; i<n2; i++)
	{
		if(s1[0]==s2[i])
		{
			int x=i; 
			for(int k=0; k<n1; k++) 
			{
				if(s1[k]==s2[x])
				{
					t++;
					x++;
				}
				else break;
			}
			if(t==n1)
			{
				printf("%s",s1);
				cout<<" is substring of ";
				printf("%s",s2);
				return 0;
			}
			else t=0;
		}
	}
	cout<<"No substring";
	return 0;
}
