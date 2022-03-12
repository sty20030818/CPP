//T1
// #include <iostream>
// using namespace std;

// int main()
// {
//     int T,n,maxx,a;
//     scanf("%d",&T);
//     for(int i=0;i<T;i++)
//     {
//         scanf("%d",&n);
//         maxx = -1;
//         for(int k=0;k<n;k++)
//         {
//             scanf("%d",&a);
//             if(a > maxx) maxx = a;
//         }
//         printf("%d\n",maxx);
//     }
//     return 0;
// }


//T2
// #include <iostream>
// using namespace std;

// int main()
// {
//     char a,b,c;
//     scanf("%c %c %c",&a,&b,&c);
//     if(c == 'S')
//     {
//         if(a == 'B' || b == 'B') printf("pmznb");
//         else if(a == 'S' || b == 'S') printf("lyrnb");
//     }
//     else if(c == 'J')
//     {
//         if(a == 'S' || b == 'S') printf("pmznb");
//         else if(a == 'J' || b == 'J') printf("lyrnb");
//     }
//     else
//     {
//         if(a == 'J' || b == 'J') printf("pmznb");
//         else if(a == 'B' || b == 'B') printf("lyrnb");
//     }
//     return 0;
// }

//T3
// #include <iostream>
// #include <cstring>
// using namespace std;

// int main()
// {
//     int T,len;
//     int cnty,cntn;
//     char s[101];
//     scanf("%d",&T);
//     while(T--)
//     {
//         cnty = cntn = 0;
//         scanf("%s",&s);
//         len = strlen(s);
//         for(int i=0;i<len;i++)
//         {
//             if(s[i] == 'Y' || s[i] == 'y') cnty++;
//             else if(s[i] == 'N' || s[i] == 'n') cntn++;
//         }
//         if(cnty >= len/2) printf("pmznb\n");
//         else if(cntn >= len/2) printf("lyrnb\n");
//         else printf("wsdd\n");
//     }
//     return 0;
// }


//T4
// #include <iostream>
// #include <cstring>
// using namespace std;

// int main()
// {
//     int m,n;
//     int x,l,r;
//     int flag[101];
//     long long a[101],b[101];
//     scanf("%d %d",&n,&m);
//     for(int i=1;i<=n;i++)
//         scanf("%lld",&a[i]);
//     while(m--)
//     {
//         scanf("%d %d %d",&x,&l,&r);
//         if(x == 1)
//         {
//             for(int k=l;k<=r;k++)
//                 a[k] = a[k]  % 996 *251 % 996 *404 % 996 *123 % 996;
//         }
//         else
//         {
//             memset(flag,0,sizeof(flag));
//             memset(b,0,sizeof(flag));

//             int cnt = 1;
//             bool falg;
//             for(int k=l;k<=r;k++)
//             {
//                 falg = false;
//                 for(int j=1;j<n;j++)
//                 {
//                     if(b[j] == a[k])
//                     {
//                         flag[j] ++;
//                         falg = true;
//                         break;
//                     }
//                 }
//                 //cout << cnt <<  " " << a[k] << endl;
//                 if(!falg)
//                 {
//                     // cout << cnt <<  " " << a[k] << endl;
//                     flag[cnt]++;
//                     b[cnt] = a[k];
//                     cnt++;
//                 }
//             }

//             int maxx = 0;
//             for(int k=1;k<=n;k++)
//             {
//                 // cout << "flag =" << flag[k] << endl;
//                 if(flag[k] > maxx) maxx = flag[k];
//             }
//             printf("%d\n",maxx);
//         }
//     }
//     return 0;
// }

/*
6 5
1 2 3 4 5 3
1 1 6
2 1 6
*/

//T5
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     int n,m,k;
//     int a[2001];
//     int b[2001];
//     scanf("%d %d %d",&n,&m,&k);
//     for(int i=0;i<n;i++)
//         scanf("%d",&a[i]);
//     for(int i=0;i<n-1;i++)
//         b[i] = a[i+1] -a[i] + 1;
//     sort(b,b+n-1);
//     for(int i=0;i<n-1;i++)
//         cout << b[i] << endl;
//     int x = (n - 1) / 2;
//     int ans=0;
//     for(int i=0;i<=x;i++)
//         ans += b[i];
//     ans += k - x - 1;
//     cout << ans;
//     return 0;
// }

//M
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    long long k;
    char s[31];
    scanf("%d %lld",&n,&k);
    scanf("%s",s);
    long long x = n;
    while(x < k) x *= 2;
    while(k > n)
    {
        k = x - k + 1;
        while(x > 2 * k)
            x /= 2;
    }
    printf("%c",s[k-1]);
    return 0;
}
