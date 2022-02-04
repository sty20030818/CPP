// // // #include<bits/stdc++.h>

// // // using namespace std;

// // // int main()
// // // {
// // // 	int n;
// // // 	long long sum=0;
// // // 	cin>>n;
// // // 	for(int i=1;i<=n;i++)
// // //     {
// // // 		long long jc=1;
// // // 		for(int j=1;j<=i;j++)
// // //         {
// // // 		    jc=jc*j;
// // // 		}
// // // 		sum+=jc;
// // // 	}
// // // 	cout<<sum;
// // // 	return 0;
// // // }



// // // #include <iostream>

// // // using namespace std;

// // // int main()
// // // {
// // //     int a[20]={520,10,5};
// // //     // int x,y,z;
// // //     // x=520;
// // //     // y=10;
// // //     // z=5;
// // //     for(int i=0;i<5;i++)
// // //         cout << a[i] << endl;
    
// // //     return 0;
// // // }

// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int main()
// // // {
// // // 	int a,b,n,t;
// // // 	double s;
// // // 	cin>>a>>b>>n;
// // // 	for(int i=1;i<=n;i++)
// // // 	{
// // // 		a=a*10;
// // // 		a=a%b;
// // //     }
// // // 	cout<<a/b;
// // //     return 0;
// // // }



// // // #include<bits/stdc++.h>
// // // using namespace std;

// // // int main()
// // // {
// // // 	int a,b,n=1;
// // // 	cin>>a,b;
// // // 	for(int i=1;i<=b;i++)
// // // 	n=n* a%7;
// // // 	switch(n)
// // // 	{
// // // 		case 0:cout<<"Sunday"<<endl;break;
// // // 		case 1:cout<<"Monday"<<endl;break;
// // // 		case 2:cout<<"Tuesday"<<endl;break;
// // // 		case 3:cout<<"Wednesday"<<endl;break;
// // // 		case 4:cout<<"Thursday"<<endl;break;
// // // 		case 5:cout<<"Friday"<<endl;break;
// // // 		case 6:cout<<"Saturday"<<endl;break;
// // // 	}
// // // 	return 0;
// // // }



// // // #include <iostream>
// // // using namespace std;

// // // signed main()
// // // {
// // // 	int a[101];
// // // 	int i;
// // // 	while(~scanf("%d",&a[i])) i++;
// // // 	for(int j=0;j<5;j++)
// // // 		printf("%d",a[i]);
// // // 	return 0;
// // // }

// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int main()
// // // {
// // // 	int a;
// // // 	cin>>a;
// // // 	while(a!=1)
// // // 	{
// // // 		if(a%2==1)
// // // 		{
// // // 			cout << a << "*3+1="  << a*3+1 << endl;
// // // 			a=a*3+1;
// // // 		}
// // // 		if(a%2!=1)
// // // 		{
// // // 			cout << a << "/2=" << a/2 << endl;
// // // 			a/=2;
// // // 		}
// // // 	}
// // // 	cout << "END" << endl;
// // // 	return 0;
// // // }


// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int main()
// // // {
// // // 	int k,n=1;
// // // 	double sum=0;
// // // 	cin>>k;
// // // 	for(int i=1; i<=n; i++)
// // // 	{
// // // 		sum += 1.0 / i;
// // // 		n ++;
// // // 		if(sum >k) cout<<n<<endl;
// // // 	}
// // // 	return 0;
// // // } 

// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// // 	int n;
// // 	cin>>n;
// // 	while(n)
// // 	{
// // 		n=n%10;
// // 		cout<<n<<" ";
// // 		n=n/10;
// // 		cout << "xiaoding" << endl;
// // 	}
// // 	return 0;
// // }
// #include<bits/stdc++.h>
// using namespace std;

// int judge(int x)
// {
// 	int sum=0;
// 	for(int i=1; i<=x-1; i++)
// 	{
// 		if(x%i == 0)
// 		{
// 			sum+=i;
// 		}
// 	}
// 	return sum;
// }
// int main()
// {
// 	int n;
// 	cin>>n;
// 	for(int i=2; i<=n; i++)
// 	{
// 		if(judge(i) == i)
// 		{
// 			cout << i << endl;
// 		}
// 	}
// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int judge(int x)
{
	int sum=1;
	for(int i=2; i<=x-1; i++)
	{
		if(x%i == 0)
		{
			sum+=i;
		}
	}
	return sum;
}
int main()
{
	int n;
	cin>>n;
	for(int i=2; i<=n; i++)
	{
		if(judge(i) == i)
		{
			cout << i << endl;
		}
	}
	return 0;
}