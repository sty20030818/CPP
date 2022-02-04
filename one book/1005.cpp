#include <cstdio>
using namespace std;
int x,a,y,b;

int main()
{
    int x,a,y,b;
    scanf("%d%d%d%d",&x,&a,&y,&b);
    printf("%.2f",(y*b-x*a)*1.0/(b-a));
    return 0;
}
