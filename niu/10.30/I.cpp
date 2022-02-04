#include <iostream>
using namespace std;
typedef long long ll;

ll qmi(ll m, ll k, ll p)
{
    ll res = 1 % p, t = m;
    while (k)
    {
        if (k&1) res = res * t % p;
        t = t * t % p;
        k >>= 1;
    }
    return res;
}

int main()
{
    ll a,b,p,n;
    ll sum;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lld %lld %lld",&a,&b,&p);
        printf("%lld\n",qmi(a+b,p,p));
    }
    return 0;
}