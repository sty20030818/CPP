#include <iostream>
#include <algorithm>
using namespace std;

int round_double(double number)
{
    return (number>0.0)?(number+0.5):(number-0.5); 
}

int main()
{
    int n,m;
    int g,ans,cnt;
    double answer;
    int score[101];
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        cin >> g;
        for(int j=0; j<n-1; j++)
            cin >> score[j];
        ans = 0;
        cnt = 0;
        int maxx=-1,minn=101;
        for(int j=0; j<n-1; j++)
        {
            if(score[j] <= m && score[j] >= 0)
            {
                if(score[j] <= minn) minn = score[j];
                if(score[j] >= maxx) maxx = score[j];
                ans += score[j];
                cnt++;
            }
        }
        ans -= maxx + minn;
        answer = ans *1.0 / (cnt - 2);
        cout << round_double((answer + g) / 2) << endl;
    }
    return 0;
}