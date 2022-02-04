#include<iostream>
#include<cmath>
using namespace std;
 
int main()
{
    int n,home,x;
    int i;
    cin>>n;
    home=sqrt(6+2*n)-1;
    for(i=home;; i++)
    {
        if((i*i+i-2*n)%6==0)
        {
            x=(i*i+i-2*n)/6;
            if(x<=0) continue;
            if(x>0)
            {
                cout<<x<<" "<<i;
                break;
            }
        }
    }
    return 0;
}

    /*
    	设最后门牌号为k，则总和为：k*(k+1)/2
    	设家的门牌号为x，则由题意：k*(k+1)/2=3*x+n
    	即：k*(k+1)=6*x+2*n
    	又：k*(k+1)+k+1>6*x+2*n
    	得：(k+1)*(k+1)>6*x+2*n
    	开方：k+1>sqrt(6*x+2*n)
    	两边减一：k>sqrt(6*x+2*n)-1
    	x取最小值1：home=sqrt(6+2*n)-1
    */