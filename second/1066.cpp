#include <iostream>
using namespace std;

int a[501][501];

int main()
{
    int m,n,l,r,ans;
    scanf("%d %d %d %d %d",&m,&n,&l,&r,&ans);

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j] >= l &&a[i][j] <= r) a[i][j] = ans;
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]>=10 && a[i][j]<=99) printf("0");
            else if(a[i][j]<10) printf("00");

            printf("%d",a[i][j]);

            if(j == n - 1) printf("\n");
            else printf(" ");
        }
    }
    return 0;
}
