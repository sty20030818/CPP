#include<cstdio>
using namespace std;
int n;
int num = 0;

int main()
{
    scanf("%d", &n);
    while (n!=1)
	{
        if (n%2==0) n/=2;
        else
		{
            n=n*3+1;
            n/=2;
        }
        num++;
    }
    printf("%d", num);
    return 0;
}
