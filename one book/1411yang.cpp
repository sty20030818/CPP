#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;
int n, m, i, s = 0, a[1001];

int dx(int n)
{
	int s = 0;
	while (n > 0)
	{
		s = s * 10 + n % 10;
		n /= 10;
	}
	return s;
}
bool flag = false;

bool ss(int n)
{
	int i = 2;
	while (i <= sqrt(n) && n % i != 0)
		i++;
	return i > sqrt(n) && n != 1;
}

int main()
{
	cin >> m >> n;
	for (i = m; i <= n; i++)
		if (ss(i) && (dx(i))) {

			s++;
			a[s] = i;
			flag = true;
		}
	if(flag)
	{
		for (i = 1; i < s; i++)
			printf("%d", a[i]);
		printf("%d", a[s]);
	} else
		printf("No");
	return 0;
}