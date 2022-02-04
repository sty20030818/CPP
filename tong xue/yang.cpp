// // // // // // // // // #include <bits/stdc++.h>
// // // // // // // // // using namespace std;

// // // // // // // // // bool isprime(int n)
// // // // // // // // // {
// // // // // // // // //     for(int i=2;i<=sqrt(n);i++)
// // // // // // // // //     {
// // // // // // // // //         if(n%i==0) return false;
// // // // // // // // //     }
// // // // // // // // //     return true;
// // // // // // // // // }

// // // // // // // // // int main()
// // // // // // // // // {
// // // // // // // // //     int n;
// // // // // // // // //     cin>>n;
// // // // // // // // //     if(isprime(n)) printf("yes\n");
// // // // // // // // //     else printf("no\n");
// // // // // // // // //     return 0;
// // // // // // // // // }

// // // // // // // // // #include <cstdio>
// // // // // // // // // using namespace std;

// // // // // // // // // int main()
// // // // // // // // // {
// // // // // // // // // 	int m,n,i,x,y,max;
// // // // // // // // // 	scanf("%d %d",&m,&n);
// // // // // // // // // 	for(i=1;i<=4000000;i++)
// // // // // // // // // 	{
// // // // // // // // // 		x=m%i;y=n%i;
// // // // // // // // // 		if(x==0&&y==0)
// // // // // // // // // 		{
// // // // // // // // // 			max=i;
// // // // // // // // // 		}
// // // // // // // // // 	}
// // // // // // // // // 	printf("%d",max);
// // // // // // // // // 	return 0;
// // // // // // // // // }

// // // // // // // // // #include <iostream>
// // // // // // // // // using namespace std;

// // // // // // // // // int main()
// // // // // // // // // {
// // // // // // // // //     int n,m;
// // // // // // // // //     int x,y;
// // // // // // // // //     int maxx=-99999;
// // // // // // // // //     for(int i=0;i<n;i++)
// // // // // // // // //     {
// // // // // // // // //         if(n%i==0 && m%i==0) maxx=i;
// // // // // // // // //     }
// // // // // // // // // }

// // // // // // // // #include<bits/stdc++.h>
// // // // // // // // using namespace std;
// // // // // // // // bool work(int x,int y){
// // // // // // // // 	if(x-y<2)return false;
// // // // // // // // 	for(int i=2; i<=sqrt(x-y); i++){
// // // // // // // // 		if((x-y)%i==0)return false;
// // // // // // // // 	}
// // // // // // // // 	return true;
// // // // // // // // }
// // // // // // // // int main()
// // // // // // // // {
// // // // // // // // 	int cnt=1,max=-1,min=110;
// // // // // // // // 	char word[110];               
// // // // // // // // 	cin>>word;
// // // // // // // // 	int len=strlen(word);
// // // // // // // // 	for(int i=0; i<len; i++){
// // // // // // // // 		for(int j=i+1; j<len; j++){
// // // // // // // // 		if(word[i]==word[j])cnt++;
// // // // // // // // 		}
// // // // // // // // 	if(cnt>max)max=cnt;
// // // // // // // // 	if(cnt<min)min=cnt;
// // // // // // // // 	cnt=1;
// // // // // // // // }
// // // // // // // // 	if(work(max,min))cout<<"Lucky Word"<<endl<<max-min;
// // // // // // // // 	else cout<<"No Answer"<<endl<<"0";
// // // // // // // // 	return 0;
// // // // // // // // }



// // // // // // // #include<bits/stdc++.h>
// // // // // // // using namespace std;
// // // // // // // int m,x;
// // // // // // // void f(int n)
// // // // // // // {
// // // // // // // 	if(n>1) f(n/m);
// // // // // // // 	switch(n%m)
// // // // // // // 	{
// // // // // // // 		case 10: cout<<'A';break;
// // // // // // // 		case 11: cout<<'B';break;
// // // // // // // 		case 12: cout<<'C';break;
// // // // // // // 		case 13: cout<<'D';break;
// // // // // // // 		case 14: cout<<'E';break;
// // // // // // // 		case 15: cout<<'F';break;
// // // // // // // 		default: cout<<n%m;break;
// // // // // // // 	}
// // // // // // // }
// // // // // // // int main()
// // // // // // // {
// // // // // // // 	cin>>x>>m;
// // // // // // // 	f(x);
// // // // // // // 	return 0;
// // // // // // // }
// // // // // // #include <iostream>
// // // // // // #include <cmath>
// // // // // // using namespace std;
// // // // // // int main()
// // // // // // {
// // // // // //     double q1=0,q2=0,a=0,i=0,sum1=0,sum2=0;
// // // // // //     scanf("%lf",&a);
// // // // // //     scanf("%lf",&sum1);
// // // // // //    	scanf("%lf",&sum2);
// // // // // //    	q1=sum2/sum1*1.0;
// // // // // //     for(int i=0;i<a;i++)
// // // // // //     {
// // // // // //         scanf("%lf",&sum1);
// // // // // //         scanf("%lf",&sum2);
// // // // // //         q2=sum2/sum1;
// // // // // //         if(q2-q1>0.05)
// // // // // //             printf("better");
// // // // // //         else if(q1-q2>0.05)
// // // // // //             printf("worse");
// // // // // //         else printf("same");
// // // // // //     } 

// // // // // //  	return 0;
// // // // // // }


// // // // #include<stdio.h>
// // // // #include<String.h> 
// // // // int main()
// // // // {
// // // // 	int n,i;
// // // // 	int tag=0; 
// // // // 	char str[100];
// // // // 	scanf("%d",&n);
// // // // 	while(n--)
// // // // 	{
// // // // 		int countP=0,countT=0,kP=0,kT=0,len; 
// // // // 		scanf("%s",str);
// // // // 		len=strlen(str); 
// // // // 		for(i=0;str[i]!='\0';i++)
// // // // 		{
// // // // 		if(str[i]!='T' && str[i]!='A' && str[i]!='P')
// // // // 		{
// // // // 			tag=1;
// // // // 			break;
// // // // 		}
// // // // 		else if(str[i]=='P')
// // // // 		{
// // // // 			kP=i;
// // // // 			countP++;
// // // // 			if(countP>1)
// // // // 			{
// // // // 				tag=1;
// // // // 				break;
// // // // 			}
// // // // 		} 
// // // // 		else if(str[i]=='T')
// // // // 		{
// // // // 			kT=i;
// // // // 			countT++;
// // // // 			if(countT>1)
// // // // 			{
// // // // 				tag=1;
// // // // 				break;
// // // // 			}
// // // // 		}
// // // // 	}
// // // // 		if( (len-kT-1)-(kP)*(kT-kP-2) !=kP  || (kT-kP-2<0))
// // // // 		{
// // // // 			tag=1;
// // // // 		 } 
// // // // 		 if(tag==1)
// // // // 		 {
// // // // 		 	printf("NO\n");
// // // // 		 }
// // // // 		 else
// // // // 		 {
// // // // 		 	printf("YES\n");
// // // // 		 }
		
// // // // }
// // // // 	return 0;
// // // //  } 


// // // // #include <bits/stdc++.h>
// // // // using namespace std;
// // // // string s;
// // // // int a[11];
// // // // int main()
// // // // {
// // // // 	cin>>s;
// // // // 	int len=s.length();
// // // // 	for(int i=0;i<=len;i++)
// // // // 	a[s[i]-'0']++;
// // // // 	for(int i=0;i<11;i++)
// // // // 	if(a[i]>0)
// // // // 	printf("%d:%d\n",i,a[i]);
// // // // 	return 0;
// // // // }


// // // #include <iostream>
// // // #include <algorithm>
// // // #include <cmath>
// // // using namespace std;

// // // // int main()
// // // // {
// // // //     double a;
// // // //     int maxx;
// // // //     // cin>>a[0]>>a[1]>>a[2];
// // // //     // maxx=max(a[0],a[1]);
// // // //     // if(a[2]>maxx) maxx=a[2];
// // // //     // cout<<maxx;

// // // //     cin>>a;
// // // //     cout<<fabs(a);
// // // //     return 0;
// // // // }
// // // int main()
// // // {
// // //     int x;
// // // 	scanf("%d",&x);
// // // 	switch(x)
// // //     {
// // //         case(1):printf("Monday");break;
// // //         case(2):printf("Tuesday");break;
// // //         case(3):printf("Wednesday");break;
// // //         case(4):printf("Thursday");break;
// // //         case(5):printf("Friday");break;
// // //         case(6):printf("Saturday");break;
// // //         case(7):printf("Sunday");break;
// // //         default:printf("input error!");break;
// // //     }
// // //     return 0;
// // // }

// // #include <iostream>
// // #include <algorithm>
// // using namespace std;
// // string s,t;
// // int main()
// // {
// // 	getline(cin,s);
// // 	s=s.substr(0,s.size()-1);
// // 	t=s;
// // 	reverse(t.begin(),t.end());
// // 	if(t==s) cout << "Yes" << endl;
// // 	else cout << "No" << endl;
// // 	return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int m,n;
// 	int a[101][101];
// 	scanf("%d %d",&m,&n);
// 	cout << m << n;
	
// 	for(int i=1;i<=m;i++)
// 	{
// 		for(int j=1;j<=n;j++)
// 		{
// 			scanf("%d",a[i][j]);
// 		}
// 	}
// 	int b[1001][1001];
// 	int c[1001][1001];
// 	for(int i=1;i<=m;i++)
// 	{
// 		for(int j=1;j<=n;j++)
// 		{
// 			scanf("%d",&b[i][j]);
// 			c[i][j]=a[i][j]+b[i][j];
// 			printf("%d",c[i][j]);
// 		}
// 		printf("\n");
// 	}

// 	return 0;
// }
