#include<iostream>
using namespace std;
int main()
{
	char c1,c2;
	string s;
	getline(cin,s);
	cin >> c1 >> c2;
	
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==c1)
			cout << c2;
		else
			cout << s[i];
	}
	cout << endl;
	return 0;
}

#include<stdio.h>
#define N 210
char s[N];
int main()
{
    int i;
    char old,new;
    gets(s);
    scanf("%c %c",&old,&new);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==old)
           s[i]=new;
    }
    puts(s);
    return 0;
}
