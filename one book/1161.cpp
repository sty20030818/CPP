#include<iostream>
using namespace std;
char num[16]= {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

void calculate(int n,int k)
{
    int temp;
    temp=n%k;
    n/=k;
    if(n!=0)
        calculate(n,k);
    cout<<num[temp];
}
int main()
{
    int x,m;
    cin>>x>>m;
    calculate(x,m);
    return 0;
}