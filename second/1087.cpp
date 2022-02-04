#include <iostream>
using namespace std;
bool num[20005];

int main()
{
    int n,add;
    int ans=0;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        add = i/2 + i/3 + i/5;
        if(!num[add])
        {
            num[add] = true;
            ans ++;
        }
    }
    cout << ans;
    return 0;
}