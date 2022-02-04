#include<iostream>  
using namespace std;  
int main()  
{
    int num[1001]={0};  
    int n,k,result=0;
    cin>>n;  
    for(int i=1;i<=n;i++) //桶排
    {  
        cin>>k;  
        if(num[k]==0) result++;
        num[k]++;  
    }
    cout<<result<<endl;  
    for(int i=1;i<=1000;i++)  
        if(num[i]) cout<<i<<" ";
    cout<<endl;  
    return 0;  
} 