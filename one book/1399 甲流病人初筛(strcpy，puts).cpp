#include <bits/stdc++.h>
using namespace std;
#define MAXN 100
 
int main()
{
    char s1[MAXN];
    char s2[MAXN][MAXN];
    int n,i,cnt=0;
    double x;
    int y;
    cin>>n;
    for(i=0; i<n; i++)
    {
        scanf("%s",&s1);
        cin>>x>>y;
        if(x>=37.5&&y)
        {
 
            strcpy(s2[cnt],s1);
            cnt++;
        }
    }
    for(i=0; i<cnt; i++)
        puts(s2[i]);
    printf("%d",cnt);
    return 0;
}
