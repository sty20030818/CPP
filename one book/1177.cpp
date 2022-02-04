#include<bits/stdc++.h>
using namespace std;
int a[505];
int n,b,k=0;
int temp;

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>b;
        if(b%2)
        {
            a[k]=b;
            k++;
        }
    }
    for(int i=0;i<k;i++)
        for(int j=i;j<k;j++)
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
    //sort(a,a+n);
    cout<<a[0];
    for(int i=1;i<k;i++)
        cout<<","<<a[i];
    return 0;
}