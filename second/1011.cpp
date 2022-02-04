#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	long long a,b,c;
	cin >> n;
	int m=1;
	while(n--)
    {
		cin >> a >> b >> c;
		if(a+b>c) cout << "Case #" << m << ": true";
		else cout << "Case #" << m << ": false";
        if(n) cout << "\n";	
		m++;
	}
	return 0;
}