#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

char str[20000];
int len,count=0,max_len=0,min_len=20000,max_end=-1,min_end=-1;

int main()
{
	
	gets(str);
	len=strlen(str);
	str[len]=' ';
	for(int i=0; i<=len; i++)
    {
		if(str[i]!=' '&&str[i]!=',')
            count++;
        else
        {
			if(count>max_len)
            {
				max_len=count;
				max_end=i;
			}
			if(count>0&&count<min_len)
            {
				min_len=count;
				min_end=i;
			}
			count=0;
		}
	}
	if(max_end<0||min_end<0)
    {
		cout<<str[0]<<endl;
		cout<<str[0]<<endl;
		return 0;
	}
	for(int i=(max_end-max_len); i<max_end; i++)
        cout<<str[i];
	cout<<endl;
	for(int i=(min_end-min_len); i<min_end; i++)
		cout<<str[i];
	cout<<endl;
	return 0;
}
