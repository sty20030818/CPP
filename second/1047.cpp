#include <iostream>
#include <algorithm>
using namespace std;

struct node
{
    int num;
    int num2;
    int score;
};
node stu[10005];
int score[10005] = {0};

int main()
{
    int n, maxx=-1, k = 0;
    cin >>n;
    for(int i=0;i<n;i++)
    {
        scanf("%d-%d %d",&stu[i].num,&stu[i].num2,&stu[i].score);
        score[stu[i].num] += stu[i].score;
    }

    for(int i=0;i<1001;i++)
    {
        if(score[i] > maxx)
        {
            maxx = score[i];
            k = i;
        }
    }
    cout << k <<" "<<  score[k];
    return 0;
}