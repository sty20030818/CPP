#include<bits/stdc++.h>
using namespace std;
int a[5];

int main()
{
	int n;
    string s;
	a['A']=1;a['B']=2;a['C']=3;a['D']=4;a['E']=5;
    
	cin >> n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<4;j++)
		{
            cin >>s;
			if(s[2] =='T') cout << a[ s[0] ];
			else continue;
		}
	}
	return 0;
}