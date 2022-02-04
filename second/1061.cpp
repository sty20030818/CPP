#include <iostream>
using namespace std;

int main()
{
    int n,m,ans;
    int score[101],answer[101];
    int a[101];
    cin >> n >> m;
    for(int i=0; i<m; i++)
        cin >> score[i];
    for(int i=0; i<m; i++)
        cin >> answer[i];
    while(n--)
    {
        ans=0;
        for(int i=0; i<m; i++)
            cin >> a[i];
        for(int i=0; i<m; i++)
            if(answer[i] == a[i]) ans += score[i];
        cout << ans << endl;
    }
    return 0;
}