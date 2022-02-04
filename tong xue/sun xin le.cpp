#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int x,y,a,b,c;
    scanf("%d",&x);
    y=x%4;
    c=x/4;a=0;b=0;
    switch(y)
    {
        case 0:a=0;b=0;c=c;break;
        case 1:a=0;b=1;c=x/4-1;break;
        case 2:a=1;b=0;c=x/4-1;break;
        case 3:a=1;b=1;c=x/4-2;break;
    }
    printf("%d %d %d\n",a,b,c);
    return 0;
}