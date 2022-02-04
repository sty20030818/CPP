#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
string a,b,s[105];
int count=0;
char space;
 
string swap(string word)
{
	if(word==a) return b;
	else return word;
}

int main()
{
    cin>>s[count++];
    scanf("%c",&space);
    while(space==' ')
    {
    	cin>>s[count++];
    	scanf("%c",&space);
	}
	cin>>a>>b;
	for(int i=0;i<count;i++)
		cout<<swap(s[i])<<" ";
    return 0;
}