#include<bits/stdc++.h>
using namespace std;

int ans[101];

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<4;i++)
    {
		for(int j=0;j<6;j++)
        {
			for(int k=0;k<8;k++)
            {
				for(int a=0;a<12;a++)	
                {
					for(int b=0;b<20;b++)
                    {
						ans[i+j+k+a+b+5]++;
					}
				}
			}
		}
	}
	int b=__gcd(ans[n],46080);
	cout << ans[n] / b << "/" << 46080/b;
	return 0;
}