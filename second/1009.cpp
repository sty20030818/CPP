#include <bits/stdc++.h>
using namespace std;

int main()
{
	int num = 0;
	string ans[90];
	while(cin >> ans[num]) num++;
	for(int i=num-1;i>=0;i--)
    {
        cout << ans[i];
		if(i) cout << " ";
	}
	return 0;
}
