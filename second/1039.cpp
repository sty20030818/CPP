// #include <bits/stdc++.h>
// using namespace std;
// string s1[1010],s2[1010];

// int main()
// {
    
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,sum;
    int i=0;
    int maxx,minn;
    while(scanf("%d",&a)!=EOF)
    {
        sum+=a;
        minn = min(minn,a);
        maxx = max(maxx,a);
    }
    printf("%d %d\n",minn,maxx);

    return 0;
}