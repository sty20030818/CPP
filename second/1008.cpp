#include <iostream>
using namespace std;

int main()
{
    int n,m;
    int a[105];
    cin >> n >>m;
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<m;i++)
    {
        for(int j=n-1;j>=0;j--)
            a[j+1] = a[j];
        a[0] = a[n];
    }
    for(int i=0;i<n-1;i++)
        cout << a[i] << " ";
    cout << a[n-1];
    return 0;
}