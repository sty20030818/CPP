#include<iostream>
#include<cmath>
#include<string>
using namespace std; 
string s;
int a[26]= {0};
int maxx=0,minn=9999;

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
    cin>>s;
    for(int i=0;i<s.length();i++)
        a[s[i]-'a']+=1;
    for(int i=0;i<26;i++)
    {
        if(maxx<a[i])
            maxx=a[i];
        if(minn>a[i]&&a[i]!=0)
            minn=a[i];
    }
    if(isPrime(maxx-minn))
        cout<<"Lucky Word"<<endl<<(maxx-minn)<<endl;
    else
        cout<<"No Answer"<<endl<<0<<endl;
    return 0;
}