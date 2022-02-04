#include <bits/stdc++.h>
using namespace std;

typedef struct node
{
    char name[12];
    char num[12];
    int score;
}stu;
stu student[101];

bool cmp(const stu&x,const stu&y)
{
    if(x.score>y.score) return true;
    else return false;
}

int main()
{
    int n;
    int maxx=-1,minn=101;
    int maxnum=-1,minnum=-1;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>student[i].name>>student[i].num>>student[i].score;
    sort(student,student+n,cmp);
    cout<<student[0].name<<' '<<student[0].num<<endl;
    cout<<student[n-1].name<<' '<<student[n-1].num<<endl;
    return 0;
}