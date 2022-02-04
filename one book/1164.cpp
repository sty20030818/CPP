#include<iostream>
using namespace std;
int calculate(int n,int k)
{
    k--;
    if(k==0) return n%10;
    else return calculate(n/10,k);
}
 
int main()
{
    int n,k;
    cin>>n>>k;
    cout<<calculate(n,k);
    return 0;
}