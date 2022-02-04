#include<bits/stdc++.h>
using namespace std;

int main()
{
	int ys,shou=0,ma=0,aa=0;
	for(int i=1;i<=12;i++)
    {
		cin>>ys;
		shou=shou+300;
		shou=shou-ys;
		if(shou<0 && aa==0) aa=-i;

		if(shou/100 != 0)
        {
			ma=ma+shou/100;
			shou=shou%100;
        }
    }
	shou=shou+100*ma*1.2;
	if(aa<0) cout<<aa;
	else cout<<shou;
    return 0;
}
