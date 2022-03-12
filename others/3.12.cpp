// #include <iostream>
// using namespace std;

// int main()
// {
//     int n,ans=0;
//     cin >> n;
//     int i=2,cnt = 0;
//     while(ans <= n)
//     {
//         ans += i;
//         i += 2;
//         cnt++;
//     }
//     cnt --;
//     cout << cnt;
//     return 0;
// }


// #include <iostream>
// #include <cmath>
// using namespace std;

// typedef long long ll;
// bool is_prime[1000002];
// bool is_prime_small[100000002];

// // int isprime(int n)
// // {
// //     int p = 0;
// //     for(int i = 0; i <= n; i ++)
// //     is_prime[0] = is_prime[1] = false;
// //     for(int i = 2; i <= n; i ++)
// //     {
// //         if(is_prime[i])
// //             for(int j = 2 * i; j <= n;j += i) is_prime[j]=false;
// //     }
// // }

// // void isprime(ll a,ll b)
// // {
// //     int cnt = 0;
// //     for(int i = 0;(ll)i * i < b; i ++) is_prime_small[i]= true;
// //     for(int i = 0;i < b - a; i ++) is_prime[i]= true;

// //     for(int i = 2;(ll)i * i < b; i ++)
// //     {
// //         if(is_prime_small[i])
// //         {
// //             cnt ++;
// //             for(int j = 2 * i;(ll)j * j < b;j += i) is_prime_small[j] = false;
// //             for(ll j = max(2LL, (a + i - 1) / i) * i; j < b; j += i) is_prime[j - a] = false;
// //         }
// //     }
// // }

// // bool isprime(int a)
// // {
// //     int a_sqrt = sqrt(a);
// //     if(a == 1) return false;
// //     if(a == 2||a == 3||a == 5) return true;
// //     if(a % 2 == 0||a % 3 == 0||a % 5 == 0) return false;
// //     if(a % 6 == 1||a % 6 == 5) return true;
// //     for(int i = 5;i <= a_sqrt;i += 6)
// //         if(a % i == 0) return false;
// //     return true;
// // }

// // bool isprime(int a)
// // {
// //     int a_sqrt = sqrt(a);
// //     if(a == 1) return false;
// //     if(a == 2||a == 3) return true;
// //     for(int i=2;i<=a_sqrt;i++)
// //         if(a % i == 0) return false;
// //     return true;
// // }

// int main()
// {
//     int L,R;
//     int range,cnt;
//     while(~scanf("%d %d",&L,&R))
//     {
//         range = R - L + 1;
//         cnt = 0;
//         if(range > 50) printf("no\n");
//         else
//         {
//             isprime(L,R+1);
//             for(int i = 0;i <= range;i ++)
//                 if(is_prime[i]) cnt ++;
//             if(cnt * 1.0 / range >= 0.5) printf("yes\n");
//             else printf("no\n");
//         }
//     }

//     // for(int i=L;i<=R;i++)
//     //     if(isprime(i))
//     //     {
//     //         printf("%d\n",i);
//     //         cnt ++;
//     //     }

//     // while(~scanf("%d %d",&L,&R))
//     // {
//     //     cnt = 0;
//     //     range = R - L + 1;
//     //     for(int i=L;i<=R;i++)
//     //         if(isprime(i)) cnt ++;
//     //     if(cnt * 1.0 / range >= 0.5) printf("yes\n");
//     //     else printf("no\n");
//     // }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// typedef long long ll;

// ll m_pow(ll x,ll n)
// {
//     ll res = 1;
//     while(n > 0)
//     {
//         if(n & 1) res *= x;
//         while(res > 1000000000) res /= 10;
//         x *= x;
//         while(x > 1000000000) x /= 10;
//         n >>= 1;
//     }
//     return res;
// }

// int main()
// {
//     ll n;
//     cin >> n;
//     ll ans = m_pow(n,n);
//     while(ans >= 10000) ans /= 10;
//     cout << ans;
//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     int n,add;
//     int p[10010];
//     while(~scanf("%d",&n))
//     {
//         add = 0;
//         for(int i=0;i<n;i++)
//         {
//             scanf("%d",&p[i]);
//             add += p[i];
//         }
//         sort(p,p+n);
//         while()
//     }
// }

// #include <iostream>
// #include <cmath>
// using namespace std;

// bool isprime(int a)
// {
//     int a_sqrt = sqrt(a);
//     if(a == 1) return false;
//     if(a == 2||a == 3) return true;
//     for(int i=2;i<=a_sqrt;i++)
//         if(a % i == 0) return false;
//     return true;
// }

// int main()
// {
//     int L,R;
//     int range,cnt;
//     while(~scanf("%d %d",&L,&R))
//     {
//         range = R - L + 1;
//         cnt = 0;
//         if(range > 50) printf("no\n");
//         else
//         {
//             for(int i=L;i<=R;i++)
//             if(isprime(i))
//                 cnt ++;
//             if(cnt * 1.0 / range >= 0.5) printf("yes\n");
//             else printf("no\n");
//         }
//     }
//     return 0;
// }


// #include <iostream>
// #include <algorithm>
// using namespace std;

// const int MAX_V = 1e5 + 2;

// int cost[MAX_V][MAX_V];
// int mincost[MAX_V];
// bool used[MAX_V];
// bool flag[101];
// int V;

// int tree()
// {
//     for(int i = 0;i < V; ++ i)
//     {
//         mincost[i] = 0;
//         used[i] = false;
//     }
//     int res = 0;

//     while(true)
//     {
//         int v = -1;
//         for(int u =0 ; u < V; u++)
//             if(!used[u] && (v == -1 || mincost[u] < mincost[v])) v = u;

//         if(v == -1) break;
//         used[v] = true;
//         res += mincost[v];
//         for(int u = 0; u < v ; u++)
//             mincost[u] = min(mincost[u] , cost[v][u]);
//     }
//     return res;
// }

// int main()
// {
//     int n,m;
//     int u,v,w;
//     for(int i=0;i<m;i++)
//     {
//         scanf("%d %d %d",&u,&v,&w);
//         cost[u][v] = min(cost[u][v] , w);
//         flag[u] = flag[v] = true;
//     }
//     for(int i=0;i<n;i++)
//         if(!flag[i])
//         {
//             cout <<"NO";
//             return 0;
//         }
//     int res = tree();
//     cout << res;
//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;

// const int MAX_V = 1e3 + 2;

// int cost[MAX_V][MAX_V];
// int mincost[MAX_V];
// bool used[MAX_V];
// bool flag[101];
// int V;

// int tree()
// {
//     for(int i = 0;i < V; ++ i)
//     {
//         mincost[i] = 0;
//         used[i] = false;
//     }
//     int res = 0;

//     while(true)
//     {
//         int v = -1;
//         for(int u =0 ; u < V; u++)
//             if(!used[u] && (v == -1 || mincost[u] < mincost[v])) v = u;

//         if(v == -1) break;
//         used[v] = true;
//         res += mincost[v];
//         for(int u = 0; u < v ; u++)
//             mincost[u] = min(mincost[u] , cost[v][u]);
//     }
//     return res;
// }

// int main()
// {
//     int m;
//     int u,v,w;
//     scanf("%d %d",&V,&m);
//     for(int i=0;i<m;i++)
//     {
//         scanf("%d %d %d",&u,&v,&w);
//         cost[u][v] = min(cost[u][v] , w);
//         flag[u] = flag[v] = true;
//     }
//     for(int i=1;i<=V;i++)
//         if(!flag[i])
//         {
//             cout <<"NO";
//             return 0;
//         }
//     cout << tree();
//     return 0;
// }


#include <iostream>
using namespace std;

typedef long long ll;

struct Stu
{
    ll minn,maxx;
    int x;
}stu[100001];

int main()
{
    int n,x;
    int a,b;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d %d %d" ,&stu[i].x,&a,&b);
        stu[i].minn = min(a,b);
        stu[i].maxx = max(a,b);
    }

    int y;
    for(int i=1;i<=n;i++)
    {
        y = stu[i].x;
        stu[i].minn = stu[y].minn = min(stu[i].minn,stu[y].minn);
        stu[i].maxx = stu[y].maxx = max(stu[i].maxx,stu[y].maxx);
    }
    for(int i=1;i<=n;i++)
    {
        printf("%d %d %d\n",stu[i].x,stu[i].minn,stu[i].maxx);
    }
    int maxxx = 0;
    int p;
    for(int i=1;i<=n;i++)
    {
        p = stu[i].maxx - stu[i].minn;
        if(p > maxxx) maxxx = p;
    }
    printf("%d",maxxx);
    return 0;
}
