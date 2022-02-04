#include <iostream>
using namespace std;
bool num[50];

int main()
{
    int n,a,j;
    int ans,cnt = 0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a;
        ans = 0;
        while(a)
        {
            ans += a % 10;
            a /= 10;
        }
        if(!num[ans])
        {
            num[ans] = true;
            cnt++;
        }
    }
    cout << cnt << endl;
    for(j=0;j<37;j++)
        if(num[j])
        {
            cout << j;
            break;
        }
    for(int i=j+1;i<37;i++)
        if(num[i]) cout << " " << i;
    return 0;
}