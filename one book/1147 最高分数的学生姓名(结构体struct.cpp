#include <cstdio>
using namespace std;
struct node
{
    int score;
    char name[30];
}
stu[110];

int main()
{
    int n,i,k,max=-1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
	{
        scanf("%d%s",&stu[i].score,stu[i].name);
        if(stu[i].score>max) k=i,max=stu[i].score;
    }
    printf("%s",stu[k].name);
    return 0;
}
