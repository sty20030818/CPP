// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//     int sum1 = 1 , sum2 = 1,x = true;
// 	scanf("%d %d",&sum1,&sum2);
// 	for(int i = sum1 ; i <= sum2 ; i++) 
// 	{
//         for(int k=2 ; k<i ; k++)
//         {
//             if(i % k == 0) x = false;
//         }
//         if(x)
//         {
//             printf("%d\n",i);
//             x = true;
//         }
//     }
//  	return 0;
// }


#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,i=1;
	double a[10005],b[10005],d=-100000;
	double h1=0,h2=0,p1=0,p2=0,c=-1;
	double maxx=-999999,minn=999999;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lf",&a[i]);
		if(maxx<a[i]) maxx=a[i];
		if(minn>a[i]) minn=a[i];
		h1+=a[i];
		b[i]=true;
	}
	for(int j=1;j<=n;j++)
	{
		if(a[j]==maxx) b[j]=false;
		if(a[j]==minn) b[j]=false;
	}
	h2 = h1-maxx-minn;
	p2 = h2/(n-2);
	for(int i=1;i<=n;i++)
		if(b[i] == true && c <= fabs(a[i]-p2)) 
			c=fabs(a[i]-p2);

	printf("%.2lf %.2lf",p2,c);
	return 0;
}
