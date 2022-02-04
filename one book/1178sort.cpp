#include <bits/stdc++.h>
using namespace std;
struct node
{
    string name;
    int score;
}stu[25];

bool cmp(node a,node b)
{
    if(a.score==b.score)return a.name<b.name;
    else return a.score>b.score;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>stu[i].name>>stu[i].score;
    }
    sort(stu,stu+n,cmp);
    for(int i=0;i<n;i++)
    {
        cout<<stu[i].name<<" "<<stu[i].score<<endl;
    }
    return 0;
}