#include<bits/stdc++.h>
using namespace std;
int len1,len2;
char m[1001],k[105];

int main()
{
	gets(k);
	gets(m);
	len1=strlen(k);
	len2=strlen(m);
	for(int i=0;i<len1;i++)
		if(k[i]>='A'&&k[i]<='Z') k[i]+=32;
	for(int i=0;i<len2;i++)
	{
		int j=i%len1;
		if(m[i]<='Z')
		{
			m[i]=m[i]-(k[j]-'a');
			if(m[i]<'A')
               m[i]=m[i]+26; 
		} 
		else 
		{
			m[i]=m[i]-(k[j]-'a');
			if(m[i]<'a')
                m[i]=m[i]+26;
		} 
	}
	puts(m);
	return 0;
}