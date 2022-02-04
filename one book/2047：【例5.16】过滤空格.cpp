#include<iostream>
using namespace std;

int main()
{
	string s;
	bool flag=false;
	
	getline(cin,s);
	
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==' ')
		{
			if(flag==false)
			{
				cout << s[i];
				flag=true;
			}
		}
		else
		{
			cout << s[i];
			flag=false;
		}
	}
	cout << endl;
	return 0;
}

#include<stdio.h>
#define N 210
char s[N];
int main()
{
    int i,flag=0;
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
            if(flag==0)
               {
                   printf("%c",s[i]);
                flag=1;
            }
        }
        else
        {
            printf("%c",s[i]);
            flag=0;
        }
    }
    printf("\n");
    return 0;
}
