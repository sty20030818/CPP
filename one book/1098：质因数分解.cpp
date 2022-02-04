#include<cstdio>
using namespace std; 

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=2;i*i<=n;i++)
        if(n%i==0)
		{
            printf("%d",n/i);
            break;
        }
    return 0;
}
