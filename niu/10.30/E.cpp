#include <iostream>
using namespace std;

static auto _=[]()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();

int main()
{
    int t,n;
    int a,b,x;
    string s,cmp;
    bool flag;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&x);
        cin >> s;
        if(n < x)
        {
            printf("impossible\n");
            continue;
        }
        flag=false;
        for(int i=0;i<n-x+1;i++)
        {
            cmp=s.substr(i,x);
            a=b=0;
            for(int j=0;j<x;j++)
            {
                if(cmp[j]=='a') a++;
                else b++;
            }
            if(a == b)
            {
                printf("%d %d\n",i+1,i+x);
                flag=true;
                break;
            }
        }
        if(!flag) printf("impossible\n");
    }
    return 0;
}