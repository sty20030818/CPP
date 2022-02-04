#include<bits/stdc++.h>
using namespace std; 

int ac(int a, int b)
{

	int x,ans=-1;
	int cishu=1;
	if(a+b<1e6&&a+b!=0) ans=1e6-a-b;
		if(a+b>1e6)
		{
			while(ans<0)
			{
				x=1e6*cishu;
				ans=x-a-b;
				cishu++;
			}
		}
		if(a+b==0||a+b==1e6)
	    ans=0;
	    return ans;
	    ans=-1;
}
int wa(int a,int b)
{
	int x,ans=-1;
	int cishu;	
		cishu=1;

		if(a+b<1000000&&a+b!=0)cout<<1000000-a-b<<endl;
		if(a+b>1000000)
		{
			while(ans<0)
			{
				x=1000000*cishu;
				ans=x-a-b;
				cishu++;
			}
            return ans;
		}
		if(a+b==0||a+b==1000000)
            ans=0;
        return ans;
}

int main()
{
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<1000000; j++)
		{
			if(wa(i,j)!=ac(i,j)) cout<<i<<" "<<j<<endl;
            else cout<<"lalala"<<endl;
		}
		break;
	} 
	return 0;
}


// time[1000];
// ren[100000]={1,10,1000,100,1,2,3,2,1,1}//每个人的工时
// for(int i=0;i<10000;i++)
// 	cin>>ren[i];
// for(int i=0;i<10000;i++)
// 	time[ren[i]]+=1;


// sort(time,time+10000);
// cout<<time[0];


