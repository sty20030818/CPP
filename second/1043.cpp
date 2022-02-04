#include <bits/stdc++.h>
using namespace std;

int main()
{
    char tong[1005];
    int cnt[10];
    memset(cnt,0,sizeof(cnt));
    cin >> tong;
    int len = strlen(tong);
    for(int i=0 ; i<len ; i++)
    {
        if(tong[i] == 'P') cnt[0]++;
        else if(tong[i] == 'A') cnt[1]++;
        else if(tong[i] == 'T') cnt[2]++;
        else if(tong[i] == 'e') cnt[3]++;
        else if(tong[i] == 's') cnt[4]++;
        else if(tong[i] == 't') cnt[5]++;
    }
    // for(int i=0 ; i<5 ; i++)
    //     cout << cnt[i];
    while(cnt[0] || cnt[1] || cnt[2] || 
                cnt[3] || cnt[4] || cnt[5])
    {
        if(cnt[0]) cout << "P",cnt[0]--;
        if(cnt[1]) cout << "A",cnt[1]--;
        if(cnt[2]) cout << "T",cnt[2]--;
        if(cnt[3]) cout << "e",cnt[3]--;
        if(cnt[4]) cout << "s",cnt[4]--;
        if(cnt[5]) cout << "t",cnt[5]--;
    }
    return 0;
}