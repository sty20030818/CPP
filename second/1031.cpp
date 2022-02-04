#include <iostream>
using namespace std;
char m[11]={'1','0','x','9','8','7','6','5','4','3','2'};
int num[20]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};

int main()
{
    int n,answer;
    bool cnt = true;
    string s;
    cin >> n;
    for(int j=0;j<n;j++)
    {
        cin >> s;
        answer = 0;
        bool flag = true;
        for(int i=0;i<17;i++)
        {
            int a = s[i] - '0';
            if(a >= 0 && a<= 9)
                answer += a * num[i];
            else
            {
                flag = false;
                cnt = false;
                break;
            }
        }

        if(!flag) cout << s << endl;
    }
    if(!cnt) cout << "All passed";
    return 0;
}