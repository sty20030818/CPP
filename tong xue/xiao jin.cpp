#include<bits/stdc++.h>
using namespace std;

int main()
{
	char a[10000];
	cin >> a;
	int len = strlen(a);
	for (int i = 0; i < len; i++)
    {
		if ((a[i] >= 'a' && a[i] < 'z') || (a[i] >= 'A' && a[i] < 'Z')) {
			printf("%c",a[i] + 1);
		} else if (a[i] == 'z')
			cout << 'a';
		else if (a[i] == 'Z')
			cout << 'A';
		else
		    cout<<a[i];
	}
	return 0;
}
