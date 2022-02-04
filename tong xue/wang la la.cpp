// #include <iostream>
// #include <cmath>
// using namespace std;

// bool isprime(int p)
// {
//     if(p == 1) return false;
//     for(int i = 2; i <= sqrt(p); i++)
//         if(p % i == 0) return false;
//     return true;
// }

// int main()
// {
// 	int x,y;
// 	cin >> x >> y;
// 	int sum = 0;
// 	for(int i=x; i <= y; i++)
//         if(isprime(i)) sum++;
//     cout << sum << endl;
//     return 0;		
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int n;
// 	double x,y;
// 	scanf("%d",&n);
// 	for(int i=0;i<n;i++)
//     {
// 		scanf("%lf",&y);
// 		x += y;
// 	}
// 	printf("%.4lf",x/n);
// 	return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	int ans;
	double s,x;
	for(int i=1;i<=n;i++)
	{
		scanf("%lf",&x);
		s=s+x;
		ans += x; 
	}
	printf("%.5lf %.5lf ",s,s/n);
	return 0;
}
