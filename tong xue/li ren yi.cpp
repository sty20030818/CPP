// #include <cstdio>
// #include <cmath>
// using namespace std;
// int main()
// {
// 	double a,b,c,x,y,x1,x2;
// 	scanf("%lf %lf %lf",&a,&b,&c); 
// 	if(a*x*x+b*x+c==0&&(a!=0))
// 		y==b*b-4*a*c;
// 	x1==(-b+sqrt(y))/(2*a);
// 	x2==(-b-sqrt(y))/(2*a);
// 	if(x1=x2)
// 		printf("%.5lf %.5lf\n",x1,x2);
// 	else if(x1!=x2)
// 	    printf("%.5lf %.5lf\n",x1=x2);
// 	else if(x1<=x2)
// 	    printf("%.5lf %.5lf\n",x2,x1);
// 	else if(x1>=x2)
// 		printf("%.5lf %.5lf\n",x1,x2);
// 	else printf("No answer!"); 
// 	return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,m=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		if(a>m) m=a;
	}
	cout<<m;
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,m=0;
	cin>>n;
	for(int i=1;i<=n;i++){
	cin>>a;
	if(a>m){
	m=a;}
	cout<<m;}
	return 0;
}
