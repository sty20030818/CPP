#include<iostream>
using namespace std;
int a[10100];

int main()
{
    int n;
    int temp,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        for(int j=i;j<n;j++)
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                sum++;
            }
    cout<<sum<<endl;
    return 0;
}