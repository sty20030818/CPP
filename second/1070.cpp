#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int num[10001];
    double ans;
    cin >> n;
    for(int i=0;i<n;i++)   
        cin >> num[i];
    sort(num,num+n);
    ans = num[0];
    for(int i=0;i<n;i++)
        ans = (ans + num[i]) / 2;
    cout << (int)ans;
    return 0;
}