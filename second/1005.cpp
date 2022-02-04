#include<iostream>
#include<algorithm>
using namespace std;

int a1[10001]={0};

bool compare(int a,int b)
{
	return a>b;
}

int main()
{
	int a[10001]={0},b[10001]={0},sum=0,k=0;
 	int n,i,t;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>t;
        a[i]=t;	
        if(!a1[t])
            while(t!=1)
            {
                if(t%2!=0)
                {
                    t=(t*3+1)/2;
                    a1[t]=1;
                }
                else
                { 
                    t=t/2;
                    a1[t]=1;
                }
            }   
    }
    for(i=0;i<n;i++)
    {
        t=a[i];	 
        if(a1[t]==0) b[sum++]=t;
    }
    sort(b,b+sum,compare);
    int b1=1;	
    for(i=0;i<sum;i++)
    {
        if(b1==1)
        {
            cout<<b[i];
            b1=0;	
        }
        else  cout<<" "<<b[i];	
    }
    cout<<endl;
    return 0;
}
