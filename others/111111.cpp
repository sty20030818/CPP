// // #include <iostream>
// // #include <cmath>
// // using namespace std;
// // int main()
// // {
// // 	int a,b,c,d,p,o,i,i;
// //     scanf("%d",&a);
// //     printf("a=%d\n",a);
// //     for (int i=0;i<a;i++)
// //     {
// // 	    scanf("%d%d%d",&b,&c,&d);
// // 	    printf("lalala%d,%d,%d\n",b,c,d);
// // 		printf("i=%d,a=%d\n",i,a);
// // 	    p=p+b;
// // 	    o=o+c;
// // 	    i=i+d;
// // 	}
// // 	i=p+o+i;
// // 	printf("%d %d %d %d",p,o,i,i);
// //  	return 0;
// // }

// // #include<bits/stdc++.h>
// // using namespace std;
// // int n,ans=0,i,d=0;

// // int main()
// // {
// //     scanf("%d",&n);
// //     for(i=1;i<=n;i++)
// // 	{
// //         d+=i;
// //         ans+=i*i;
// //         if(d>=n) break;
// //     }
// //     if(d==n) printf("%d",ans);
// //     else printf("%d",ans-(d-n)*i);
// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;
// // string s;
// // int main()
// // {
// //     cin >> s;
// //     cout << s.length();
// //     return 0;
// // }

// // #include <iostream>
// // #include <cmath>
// // using namespace std;

// // int main()
// // {
// //     int x, n;
// //     double y;
// //     scanf("%d %d", &x, &n);
// //     for(int i=1; i<=n; i++)
// //     {
// //         y = 1.1 * x;
// //         x = y;
// //     }
// //     printf("%.4lf",y);
// //     return 0;
// // }

// // #include<iostream>
// // #include<cstring>
// // using namespace std;

// // struct Books
// // {
// //     char title[100];
// //     char name [100];
// //     char subsumect[100];
// //     char BookID[100];
// // }book1,book2;

// // void print(Books &boook)
// // {
// //     cout<<boook.title<<endl;
// // }

// // int main()
// // {
// //     strcpy(book1.title,"程序设计");
// //     cout << "第一本书的书名：";
// //     print(book1);
// //     cout << endl;
// //     strcpy(book2.title,"设计");
// //     cout << "第二本书的书名：";
// //     print(book2);
// //     cout << endl;
// //     return 0;
// // }

// // #include <iostream>
// // #include <cstring>
// // using namespace std;
// // char a[300];

// // int main()
// // {
// //     int n;
// //     cin >> n;
// //     while(n --)
// //     {
// //         cin >> a;
// //         int len=strlen(a);
// //         int num=1,maxx=0;
// //         char maxc;
// //         for (int i = 0; i < len; ++i)
// //         {
// //             if(a[i] == a[i+1]) num++;
// //             else
// //             {
// //                 if(num > maxx)
// //                 {
// //                     maxx = num;
// //                     maxc = a[i];
// //                 }
// //                 num = 1;
// //             }
// //         }
// //         cout << maxc << " " << maxx;
// //     }
// //     return 0;
// // }


// // #include <iostream>
// // using namespace std;

// // int main()
// // {
// //     int n;
// //     int a[101];
// //     int ans[10001]={0};
// //     bool flag=false;
// //     cin >> n;
// //     for(int i=0;i<n;i++)
// //         cin >> a[i];
// //     for(int i=0;i<n;i++)
// //         ans[a[i]] ++;
// //     for(int i=0;i<2001;i++)
// //     {
// //         if(ans[i] == 1)
// //         {
// //             cout << i <<" ";
// //             flag=true;
// //         }
// //     }
// //     if(!flag) cout << "0";
// //     return 0;
// // }2233333333333333333333333333

// #include <iostream>
// using namespace std;

// int add(int x,int y)
// {
//     return x+y;
// }

// int main()
// {
//     int n,m;
//     cin >> n >> m;
//     cout << add(n ,m) << endl;
//     return 0;
// }

// #include<iostream>
// #include<cstring>
// using namespace std;
// int a[101],b[101],c[101],d,i;
// void init(int a[])
// {
// 	string s;
// 	cin>>s;
// 	a[0]=s.length();
// 	for(i=1;i<=a[0];i++)
// 		a[i]=s[a[0]-i]-'0';
// }
// void print(int a[])
// {
// 	if(a[0]==0)
//     {
// 		cout<<0<<endl;
// 		return ;
// 	}
// 	for(int i=a[0];i>0;i--) cout<<a[i];
// 	cout<<endl;
// 	return ;
// }
// int compare(int a[],int b[])
// {
// 	if(a[0]>b[0]) return 1;
// 	if(a[0]<b[0]) return -1;
// 	for(int i=a[0];i>0;i--)
//     {
// 		if(a[i]>b[i]) return 1;
// 		if(a[i]<b[i]) return -1;
// 	}
// 	return 0;
// }
// void sumian(int a[],int b[])
// {
// 	int flag,i;
// 	flag=compare(a,b);
// 	if(flag==0)
//     {
//         a[0]=0;
//         return;
//     }
// 	if(flag==1)
//     {
// 		for(i=1;i<=a[0];i++)
//         {
// 			if(a[i]<b[i])
//             {
// 				a[i+1]--;
// 				a[i]+=10;
// 			}
// 			a[i]-=b[i];
// 		}
// 		while(a[0]>0&&a[a[0]]==0) a[0]--;
// 		return;
// 	}
// }
// void numcpy(int p[],int i[],int det){
// 	for(int i=1;i<=p[0];i++) i[i+det-1]=p[i];
// 	i[0]=p[0]+det-1;
// }
// void chu(int a[],int b[],int c[])
// {
// 	int i,tmp[101];
// 	c[0]=a[0]-b[0]+1;
// 	for(i=c[0];i>0;i--)
//     {
// 		memset(tmp,0,sizeof(tmp));
// 		numcpy(b,tmp,i);
// 		while(compare(a,tmp)>=0)
//         {
// 			c[i]++;
// 			sumian(a,tmp);
// 		}
// 	}
// 	while(c[0]>0&&c[c[0]]==0) c[0]--;
// 	return ;
// }
// int main()
// {
// 	memset(a,0,sizeof(a));
// 	memset(b,0,sizeof(b));
// 	memset(c,0,sizeof(c));
// 	init(a);
// 	init(b);
// 	chu(a,b,c);
// 	print(c);
// 	print(a);
// 	return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
// 	int a[101],*p;
// 	p=a;
// 	cout << p;
// 	return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;

// bool isPrime(int n)
// {
// 	double n_sqrt=sqrt(n);
// 	if(n==2||n==3) return true;
// 	if(n%6!=1&&n%6!=5) return false;
// 	for(int i=5;i<=n_sqrt;i+=6)
// 	    if(n%(i)==0||n%(i+2)==0) return false;
//     return true;
// }

// int main()
// {
//     int x;
// 	int *p;
//     bool flag;
// 	p = &x;
//     cin >> *p;
//     for(int i=3; i<x-1; i++)
//     {
//         if(isPrime(i)&&isPrime(i+2))
//         {
//             cout << i << " " << i+2 << endl;
//             flag = true;
//         }
//     }
//     if(!flag) cout << "empty";
//     return 0;
// }

// #include<iostream>
// #include<cstdio>
// #include<string>
// using namespace std;
// string a,b,s[105];
// int count=0;
// char space;

// string swap(string word)
// {
// 	if(word == a) return b;
// 	else return word;
// }

// int main()
// {
//     cin >> s[count++];
//     scanf("%c", &space);
//     while(space==' ')
//     {
//     	cin >> s[count++];
//     	scanf("%c", &space);
// 	}
// 	cin >> a >> b;
// 	for(int i=0; i<count; i++)
// 		cout << swap(s[i]) << " ";
//     return 0;
// }

// #include <cstdio>
// #include <string.h>
// using namespace std;
// char a[510];
// char c;
// int k=0,len,i=0,cnt,sum;

// int main()
// {
//     while((c=getchar())!='\n')
//         a[k++]=c;
//     a[k]='\0';
//     len=strlen(a);
//     while(i<len)
// 	{
//         cnt=0;
//         while(i<len&&a[i]==' ') i++;
//         while(i+cnt<len&&a[i+cnt]!=' ') cnt++;
//         for(sum=0;sum<cnt/2;sum++)
// 		{
//             c=a[i+sum];
// 			a[i+sum]=a[i+cnt-1-sum];
// 			a[i+cnt-1-sum]=c;
//         }
//         i+=cnt;
//     }
//     printf("%s",a);
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main()
// {
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);
//     printf("%d",b);
//     return 0;
// }

// #include <cstdio>
// using namespace std;

// int main()
// {
//     printf("%d",sizeof("Hello, World!"));
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int x;
//     bool a=false;
// 	   scanf("%d",&x);
// 	   if(x%3==0){printf("3 ");a=true;}
// 	   if(x%5==0){printf("5 ");a=true;}
// 	   if(x%7==0){printf("7");a=true;}
// 	   if(!a) printf("n");
//     return 0;
// }


// #include <math.h>
// #include <stdio.h>
// #include <stdlib.h>

// #define PI 3.14159265359

// float sx, sy;

// float sdCircle(float px, float py, float r) {
//   float dx = px - sx, dy = py - sy;
//   return sqrtf(dx * dx + dy * dy) - r;
// }

// float opUnion(float d1, float d2) {
//   return d1 < d2 ? d1 : d2;
// }

// #define T px + scale * r * cosf(theta), py + scale * r * sin(theta)

// float f(float px, float py, float theta, float scale, int n) {
//   float d = 0.0f;
//   for (float r = 0.0f; r < 0.8f; r += 0.02f)
//     d = opUnion(d, sdCircle(T, 0.05f * scale * (0.95f - r)));

//   if (n > 0)
//     for (int t = -1; t <= 1; t += 2) {
//       float tt = theta + t * 1.8f;
//       float ss = scale * 0.9f;
//       for (float r = 0.2f; r < 0.8f; r += 0.1f) {
//         d = opUnion(d, f(T, tt, ss * 0.5f, n - 1));
//         ss *= 0.8f;
//       }
//     }

//   return d;
// }

// int main(int argc, char* argv[]) {
//   int n = argc > 1 ? atoi(argv[1]) : 3;
//   for (sy = 0.8f; sy > 0.0f; sy -= 0.02f, putchar('\n'))
//     for (sx = -0.35f; sx < 0.35f; sx += 0.01f)
//       putchar(f(0, 0, PI * 0.5f, 1.0f, n) < 0 ? '+' : ' ');
// 	return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   long long sum=0;
//   int a,b,c;
//   sum = 0;
//   scanf("%d",&c);
//   if(c==1)
//   {
//     printf("0");
//     return 0;
//   }
//   sum = c * 2 - 3;
//   a = floor( sqrt(c) );
//   for(int i=2; i<=a; i++)
//   {
//     b = floor( c / i );
//     sum += ( b - i ) * 2 + 1;
//     if(c % i == 0) sum -= 2;
//   }

//   if(a * a == c) sum--;
//   printf("%lld",sum);
//   return 0;
// }

// #include <iostream>
// using namespace std;

// void s(char *a,char &b,char c)
// {
//     *a++;
//     b++;
//     c++;
// }

// int main()
// {
//     char x='A',y='F',z='M';
//     s(&x,y,z);
//     cout << x << y << z << endl;
//     s(&x,y,z);
//     cout << x << y << z;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main()
// {
//     int a,b;
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         cin >> a >> b;

//     }
// 	return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int ans, n, mod = 1e9+7;

// int main()
// {
// 	while(~scanf("%d",&n))
//     {
//         ans = 0;
//         for(int i = 1; i <= n; i++)
//             for(int j = i; j <= n; j++)
// 		        ans = (ans + j) % mod;
//         printf("%d\n",ans);
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int mod = 1e9+7;
// int main()
// {
//     int n;
// 	while(~scanf("%d",&n))
//         printf("%d\n",(n*(n+1)*(2*n+1)/6)%mod);
//     return 0;

// }


// #include<bits/stdc++.h>
// #include <windows.h>
// using namespace std;

// int main()
// {
//     int message_num;
//     char container[50];
//     cout << "请输入轰炸的次数\n";
//     cin >> message_num;
//     cout << "请输入轰炸的对象\n";
//     cin >> container;
//     FindWindow(NULL,container);

//     while(message_num)
//     {
//         SendMessage(FindWindow(NULL,container),WM_PASTE,NULL,NULL);

//         SendMessage(FindWindow(NULL,container),WM_KEYDOWN,VK_RETURN,NULL);

//         message_num --;
//     }
//     return 0;

// }


// #include<bits/stdc++.h>
// using namespace std;

// int a[10000000],b[10000000]={0};
// int main()
// {
// 	int m,n,i,j,k,counter=1,sum=0;
// 	cin>>m>>n;
// 	for(i=1;i<=n;i++)
// 	{
// 		cin>>a[i];
// 	}
// 	for(i=1;i<=n;i++)
// 	{
// 		int flug=1;
// 		for(j=1;j<=m;j++)
// 		{
// 			if(a[i]==b[j])
// 			{
// 				flug=0;
// 				break;
// 			}
// 		}
// 		if(flug==1)
// 		{
// 			sum++;
// 			if(counter<=m-1)
// 			{
// 				b[counter]=a[i];
// 				counter++;
// 			}
// 			else
// 		    {
// 		    	for(k=1;k<=m;k++)
// 		    	{
// 		    		if(k!=m)
// 		    		    b[k]=b[k+1];
// 		    		if(k==m)
// 		    		    b[k]=a[i];
// 				}
// 			}
// 		}
// 	}
// 	cout<<sum;
// 	return 0;
// }


// #include<bits/stdc++.h>
// #include<cmath>
// using namespace std;

// int a[105]={0};
// bool x(int a)
// {
// 	int flug=1;
// 	for(int i=2;i<=sqrt(a);i++)
// 	{
// 		if(a%i==0)
// 		{
// 			flug=0;
// 			break;
// 		}
// 	}
// 	if(flug==1&&a>=2)
// 	    return true;
// 	else
// 	    return false;
// }

// int main()
// {
// 	int maxn=0,minn=9999,ans;
// 	string s;
// 	getline(cin,s);
// 	for(int i=0;i<s.size();i++)
// 	{
// 		a[s[i]]++;
// 	}
// 	for(int i=0;i<s.size();i++)
// 	{
// 		if(a[s[i]]>maxn)
// 		{
// 			maxn=a[s[i]];
// 		}
// 		if(a[s[i]]<minn&&a[s[i]]!=0)
// 		{
// 			minn=a[s[i]];
// 		}
// 	}
// 	ans=maxn-minn;
// 	if(x(ans)==true)
// 	{
// 	    cout<<"Lucky Word"<<'\n';
// 	    cout<<ans<<'\n';
// 	}
// 	else
// 	{
// 	    cout<<"No Answer"<<'\n';
// 	    cout<<0<<'\n';
// 	}
// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int i,ans;

// int digit(int n,int k)
// {
// 	ans=n%10;
// 	n=n/10;
// 	i++;
// 	if(i<k)
// 	    digit(n,k);
// 	else
// 	    return ans;
// }

// int main()
// {
// 	int n,k;
// 	cin>>n>>k;
// 	cout<<digit(n,k);
// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int a[300];
// char s[100100];
// int len,i;

// int main()
// {
//     memset(a,0,sizeof(a));
//     scanf("%s",s);
//     len=strlen(s);
//     for(i=0;i<len;i++)
//         a[s[i]]++;
//     for(i=0;i<len;i++)
//         if(a[s[i]]==1)
// 		{
//             printf("%c",s[i]);
//             return 0;
//         }
//     printf("no");
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main( )
// {
// 	int a[100],i=1;
// 	char x[10000];
// 	memset(a,0,sizeof(a));
// 	while((x[i]=getchar())!='\n')
// 	{
// 		a[x[i]-'a']++;
// 		i++;
// 	}
// 	for(i=0;i<26;i++)
// 	{
// 		if(a[i]==1)
// 		{
// 			printf("%c",x[i]);
// 			return 0;
// 		}
// 	}
// 	cout<<"no";

// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	// stu[1].id=1;
// 	// stu[1].score=50;
// 	// stu[2].id=2;
// 	// stu[2].score=100;

// 	// swap(stu[1],stu[2]);
// 	// cout <<stu[1].id << endl;
// 	// cout <<stu[1].score << endl;
// 	// cout <<stu[2].id << endl;
// 	// cout <<stu[2].score << endl;
// 	int minn = 0x7FFFFFFF;
// 	cout << minn << endl;
// 	cout << INT_MAX;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// struct node
// {
//     int score;
//     char name[30];
// }
// stu[110];

// int main()
// {
//     int n,i,k,max=-1;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
// 	{
//         scanf("%d%s",&stu[i].score,stu[i].name);
//         if(stu[i].score>max) k=i,max=stu[i].score;
//     }
//     printf("%s",stu[k].name);
//     return 0;
// }


// #include <iostream>
// #include <algorithm>
// using namespace std;

// struct node
// {
//     string name;
//     int score;
//     int note;
// }stu[101];

// bool cmp(const node&x,const node&y)
// {
//     return x.score < y.score;
// }

// int main()
// {
//     int a;
//     cin >> a;
//     for(int i=0;i<a;i++)
//         cin >> stu[i].name >> stu[i].score;

//     sort (stu,stu+a,cmp);

//     for(int i=0;i<a;i++)
//         cout << stu[i].name << stu[i].score;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     char a[100], b[100], c[100];
//     int a1[100], b1[100], c1[100];
//     int i, lena, lenb, lenc;

//     memset(a, 0, sizeof(a)); //数组清零
//     memset(b, 0, sizeof(b));
//     memset(c, 0, sizeof(c));

//     cin >> a >> b;

//     lena = strlen(a);
//     lenb = strlen(b);
//     if (lena < lenb || (lena == lenb && strcmp(a, b) < 0)) //如果存在a<b的情况，提负号
//     {
//         swap(a, b);
//         cout << "-";
//     }

//     swap(lena,lenb);

//     for (i = 0; i <= lena - 1; i++) //字符串倒序
//         a1[i] = a[lena - i - i] - '0';
//     for (i = 0; i <= lenb - 1; i++)
//         b1[i] = b[lenb - i - 1] - '0';

//     for (i = 1; i <= lena; i++) //不够的借位
//     {
//         if (a1[i] < b1[i])
//         {
//             a1[i] += 10;
//             a1[i - 1]--;
//         }
//         c1[i] = a1[i] - b1[i];
//     }

//     lenc = i;

//     for (i = lenc - 1; i >= 0; i--) //处理前导零问题
//     {
//         if (c1[i] == 0 && lenc > 1) lenc--;
//         else break;
//     }

//     for (i = lenc - 1; i >= 0; i--) //倒序输出
//         cout << c1[i];
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[100], b[100];
    int a1[100], b1[100], c1[100], i, lena, lenb, lenc;
    memset(a1, 0, sizeof(a1)); //数组清零
    memset(b1, 0, sizeof(b1));
    memset(c1, 0, sizeof(c1));
    gets(a);
    gets(b);
    lena = strlen(a);
    lenb = strlen(b);
    if (lena < lenb || (lena == lenb && (strcmp(a, b) < 0))) //如果存在a<b的情况，提负号
    {
        swap(lena, lenb);
        cout << "-";
    }
    for (i = 0; i <= lena - 1; i++) //字符串倒序
    {
        a1[i] = a[lena - i - i] - '0';
    }
    for (i = 0; i <= lenb - 1; i++)
    {
        b1[i] = b[lenb - i - 1] - '0';
    }
    for (i = 0; i <= lena; i++) //不够的借位
    {
        if (a1[i] < b1[i])
        {
            a1[i] += 10;
            a1[i - 1]--;
        }
        c1[i] = a1[i] - b1[i];
    }
    lenc = i;
    for (i = lenc - 1; i >= 0; i--) //处理前导零问题
    {
        if (c1[i] == 0 && lenc > 1)
            lenc--;
        else
            break;
    }
    for (i = lenc - 1; i >= 0; i--) //倒序输出
    {
        cout << c1[i];
    }
    return 0;
}
