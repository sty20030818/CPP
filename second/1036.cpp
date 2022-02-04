#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char c;
    cin>>n>>c;
    int m=(n+1)/2;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0||i==m-1||j==0||j==n-1)
                printf("%c",c);
            else
                cout<<" ";
        }
        printf("\n");
    }
    return 0;
}