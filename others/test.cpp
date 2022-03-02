// // #include<iostream>
// // #include<algorithm>
// // using namespace std;
// // bool compare(int a,int b);
// // int a1[10001]={0};
// // int main()
// // {
// // 	int a[10001]={0},b[10001]={0},sum=0,k=0;
// //  	int n,i,t;
// //     cin>>n;
// //     for(i=0;i<n;i++)
// //     {
// //         cin>>t;
// //         a[i]=t;	
// //         if(!a1[t])
// //             while(t!=1)
// //             {
// //                 if(t%2!=0)
// //                 {
// //                     t=(t*3+1)/2;
// //                     a1[t]=1;
// //                 }
// //                 else
// //                 { 
// //                     t=t/2;
// //                     a1[t]=1;
// //                 }
// //             }   
// //     }
// //     for(i=0;i<n;i++)
// //     {
// //         t=a[i];	 
// //         if(a1[t]==0) b[sum++]=t;
// //     }
// //     sort(b,b+sum,compare);
// //     int b1=1;	
// //     for(i=0;i<sum;i++)
// //     {
// //         if(b1==1)
// //         {
// //             cout<<b[i];
// //             b1=0;	
// //         }
// //         else  cout<<" "<<b[i];	
// //     }
// //     cout<<endl;
// //     return 0;
// // }

// // bool compare(int a,int b)
// // {
// // 	return a>b;
// // }
// // #include<iostream>
// // using namespace std;
// // int n,c; 

// // int main()
// // {
// //     for(n=32; n<=99; n++)
// //     {
// //         c=n*n;
// //         int a=c/100;
// //         int b=c%100;
// //         if(a%11==0&&b%11==0) cout<<c<<endl;
// //     }
// //     return 0;
// // }

// // #include <cstdio>
// // using namespace std;
// // int ans,a,n;

// // int main()
// // {
// // 	ans=0;
// // 	a=1;
// // 	scanf("%d",&n);
// // 	for(int i=1;i<=n;i++)
// // 	{
// // 		a*=i;
// // 		a%=1000000;
// // 		ans+=a;
// // 		ans%=1000000;
// // 	}
// // 	printf("%d",ans);
// // 	return 0;
// // }

// // #include <iostream>
// // using namespace std;

// // int main()
// // {
// // 	int h;
// // 	double meter,height;
// // 	cin >> h;
// // 	height = h;
// // 	meter += height;
// // 	for(int i=1 ; i<10 ; i++)
// // 	{
// // 		meter += height;
// // 		height /= 2;
// // 	} 
// // 	cout << meter << endl;
// // 	cout << height / 2;
// // 	return 0;
// // }

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     int sum1,sum2,sum3,sum4;
//     scanf("%d %d %c %d",&sum1,&sum2,&sum3,&sum4);

//     for(int i=1;i<=sum2;i++)
// 		printf("%c",sum3);
// 	printf("\n");

// 	for(int i=1;i<=sum1-2;i++)
// 	{
// 		printf("%c",sum3);
// 		for(int j=1;j<=sum2-2;j++)
// 		{
// 			if(sum4==0) printf(" ");
// 			else printf("%c",sum3);
// 		}
// 		printf("%c\n",sum3);
// 	}

// 	for(int i=1;i<=sum2;i++)
// 		printf("%c",sum3);
// 	printf("\n");
//  	return 0;
// }
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	int n,p=0,a[10005],v=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			p+=1;
			a[p]=i;
		}
	}
	for(int g=1;g<=n;g++)
	{
		v=v+a[g];
		printf("%d %d %d\n",g,a[g],v);
	}
	printf("%d",v);
	return 0;
}