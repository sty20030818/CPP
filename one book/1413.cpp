#include<iostream>
using namespace std;
int a,b,c;

int judge(int x,int B)
{
    int value=1,num=0;
    while(x!=0)
    {
        if((x%10)>=B) return 99999;
        num+=((x%10)*value);
        value*=B;
        x/=10;
    }
    return num;
}
 
int main()
{
    cin>>a>>b>>c;
    for(int i=2;i<=40;i++)
    {
        if(judge(a,i)*judge(b,i)==judge(c,i))
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<0<<endl;
    return 0;
}