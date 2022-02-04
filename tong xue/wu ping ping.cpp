// // #include <iostream>
// // using namespace std;
// // int add(int x);
// // int main()
// // {
// // 	int add(int x);
// // 	int n,sum=0,i;
// // 	cin >> n;
// // 	for (i = 1;i <= n;i++) {
// // 		sum += add(i);
// // 	}
// // 	printf("%d", sum);
// // 	return 0;
// // }
// // int add(int x) {
// //     int ans;
// // 	while (x != 0) {
// // 		x--;
// //         ans+=x;
// // 	}
// // 	return ans;
// // }


// // #include <iostream>
// // using namespace std;

// // bool isprime(int x)
// // {
// //     int i;
// //     for( i=2;i<=x;i++)
// //    		if(x%i==0) return 0;
// // 	return 1;
// // }

// // int inverted(int n)
// // {
// //     int sum=0;
// //     while(n>0)
// //     {
// //         sum = sum*10 + n%10;
// //         n /= 10;
// //     }
// //     return sum;
// // }

// // int main()
// // {
// // 	int m,n,d=0;
// //     cin >> m >> n;
// //     for(int i=m; i<=n; i++)
// // 	{
// //         if(isprime(i) && isprime(inverted(i)))
// // 		{
// //             d++;
// //             printf("%d ",i);
// //         }
// //     }
// //     if(d == 0) printf("No");
// //     return 0;
// // }


// #include <iostream>
// using namespace std;
// bool zsh(int x);
// int inverted(int n);
// int main()
// {
// 	int m,n,d=0;
//     cin>>m>>n;
//     for(int i=m;i<=n;i++)
//     {
//         if(zsh(i)&&zsh(inverted(i)))
//         {
//             d++;
//             printf("%d ",i);
//         }
//     }
//     if(d==0) printf("No");
//     return 0;
// }

// bool zsh(int x)
// {
//     int i;
//     for( i=2;i<x;i++)
//     {
//         if(x%i==0) return 0;
//     	return 1;
//     }
// }

// int inverted(int n)
// {
//     int sum=0;
//     while(n>0)
//     {
//         sum=sum*10+n%10;
//         n/=10;
//     }
//     return sum;
// }


// #include <iostream>
// using namespace std;

// int main()
// {
//     int n,m,k=0,a;

// 	scanf("%d %d",&n, &m);
// 	for(int i=n; i<=m; i++)
// 	{
// 		a = i;
// 		while(a != 0)
// 		{
//             m = a % 10;
//             if(m == 2) k++;
//             a /= 10;
// 		}
// 	}
// 	printf("%d",k);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int n,m,i,sum=0;
//     int a;
// 	scanf("%d %d",&n,&m);
// 	for(i=n;i<=m;i++)
// 	{
//         a = i;
// 		while(a)
// 		{
//             a = i%10;
//             if(i==2) sum++;
//             i = i/10;
//             printf("i=%d\n",i);
// 		}
// 	}
// 	printf("%d",sum);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     float x;
//     printf("%d %d",sizeof(x),sizeof(float));
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     char a;
//     scanf("%c",&a);
//     if(a == 'z') printf("a");
//     else printf("%c",a+1);
//     return 0;
// }

#include <iostream>
// using namespace std;
// int main()
// {
//     long long sum=0,m=1;
//     int num;
//     cin >> num;
//     for(int i=1;i<=num;i++)
//     {
//         m*=i;
//         sum+=m;
//     }
//     cout << sum;
//     return 0;
// }


#include <iostream>
using namespace std;
int main()
{
	int n,m,a[101][101];
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cout<<a[j][i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
