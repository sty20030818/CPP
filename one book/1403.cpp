#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
	double n_sqrt=sqrt(n);
	if(n==2||n==3) return true;
	if(n%6!=1&&n%6!=5) return false;
	for(int i=5;i<=n_sqrt;i+=6)
	    if(n%(i)==0||n%(i+2)==0) return false;
    return true;
} 

int main()
{
    int x;
    bool flag;
    cin>>x;
    for(int i=3;i<x-1;i++)
    {
        if(isPrime(i)&&isPrime(i+2))
        {
            cout<<i<<" "<<i+2<<endl;
            flag=true;
        }
    }
    if(!flag) cout<<"empty";
    return 0;
}