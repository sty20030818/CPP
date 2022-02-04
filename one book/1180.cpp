#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,m;
    int number[10000],score[10000];
    int i,j;
    int inter_score,inter_people=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
        cin>>number[i]>>score[i];
    for(i=1;i<=n-1;i++)
    {
        for(j=0;j<=n-i;j++)
        {
            if(score[j]<score[j+1])
            {
                swap(score[j],score[j+1]);
                swap(number[j],number[j+1]);
            }
            if(score[j]==score[j+1])
            {
                if(number[j]>number[j+1])
                {
                    swap(score[j],score[j+1]);
                    swap(number[j],number[j+1]);
                }
            }
        }
    }
    m=double(m*1.5);
    inter_score=score[m-1];
    for(i=0;i<n;i++)
        if(score[i]>=inter_score) inter_people++;
        else break;
    cout<<inter_score<<" "<<inter_people<<endl;
    for(i=0;i<inter_people;i++)
        cout<<number[i]<<" "<<score[i]<<endl;
    return 0;
}