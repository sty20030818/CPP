#include <cstdio>
using namespace std;
int a,b,ji,tu;

int main()
{
	scanf("%d %d",&a,&b);
	tu=(b-2*a)/2;
	ji=a-tu;
	printf("%d %d",ji,tu);
	return 0;
}
