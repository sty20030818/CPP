#include<iostream>
using namespace std;
int x,y;
char z;

int calc(int x,char z,int y)
{
    if(z=='+')	return x+y;
    if(z=='-')	return x-y;
    if(z=='*')	return x*y;
    if(z=='/')	return x/y;
    if(z=='%')	return x%y;
}

int main()
{
    cin>>x>>z>>y;
    cout<<calc(x,z,y)<<endl;
    return 0;
}
 
