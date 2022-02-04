#include<bits/stdc++.h>
using namespace std;
struct node
{
    int id;
    double score;
}student[110],temp;
int n,k;

int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>student[i].id>>student[i].score;
    for(int i=0;i<n;i++)
        for(int j=i;j<n;j++)
            if(student[i].score<student[j].score)
            {
                temp=student[i];
                student[i]=student[j];
                student[j]=temp;
            }
    // for(int i=0;i<n;i++)
    //     cout<<student[i].score<<endl;
    cout<<student[k-1].id<<" "<<student[k-1].score;
    return 0;
}