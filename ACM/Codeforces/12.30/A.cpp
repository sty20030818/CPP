#include <iostream>
using namespace std;

int main()
{
    int flag[105],flagg[105];
    int a,ans;
    int n,t;
    bool lalala;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i=0;i<102;i++)
            flag[i] = flagg[i] = 0;
        lalala = false;
        ans = 0;
        for(int i=0;i<n;i++)
        {
            cin >> a;
            if(a > 0) flag[a] ++;
            else if(a < 0) flagg[-a] ++;
            else lalala = true;
        }
        if(lalala) ans++;
        for(int i=0;i<101;i++)
        {
            if(flag[i] > 1) flagg[i]++;
            if(flagg[i] > 1) flag[i]++;
        }
        for(int i=0;i<101;i++)
        {
            if(flag[i]) ans++;
            if(flagg[i]) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
