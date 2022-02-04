#include <bits/stdc++.h>
using namespace std;
struct node
{
    int score;
    char name[30];
}stu[30];
int n,t;
char a[30];

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>stu[i].name>>stu[i].score;
    for(int i=0;i<n;i++)
        for(int j=0;j<n-1;j++)
            if ((stu[j].score<stu[j+1].score)||((stu[j].score==stu[j+1].score)&&strcmp(stu[j].name,stu[j+1].name)))
            {
                t=stu[j].score;stu[j].score=stu[j+1].score;stu[j+1].score=t;
                strcpy(a,stu[j].name);
                strcpy(stu[j].name,stu[j+1].name);
                strcpy(stu[j+1].name,a);
            }
    for (int i=0;i<n;i++)
        cout<<stu[i].name<<" "<<stu[i].score<<endl;
    return 0;
}