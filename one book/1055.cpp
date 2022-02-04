#include<bits/stdc++.h>
using namespace std;
int y;

int main()
{
    scanf("%d",&y);
    if(y%100==0)
	{
	    if(y%400==0)printf("Y");
        else printf("N");
	}
    else if(y%4==0)printf("Y");
    else printf("N");
    return 0;
}