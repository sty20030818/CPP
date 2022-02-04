#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int shu)
{
	double n_sqrt=sqrt(shu);
	if(shu==1) return false;
	if(shu==2||shu==3) return true;
	if(shu%6!=1&&shu%6!=5) return false;
	for(int i=5;i<=n_sqrt;i+=6)
	    if(shu%i==0||shu%(i+2)==0) return false;
    return true;
}

int main()
{
    for(int x=6; x<=100; x+=2)
        for(int i=2; i<=x/2; i++)
            if(isPrime(i)&&isPrime(x-i))
            {
                cout<<x<<"="<<i<<"+"<<x-i<<endl;
                break;
            }
    return 0;
}