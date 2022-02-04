#include <bits/stdc++.h>
#include <string>
using namespace std;

string shu[]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
int len,lens,ad;
string s;
int sum[1001];

int main()
{
    cin >> s;
    int len = s.size();
    cout << lens;
    for (int i=0 ; i<lens; i++)
    {
        ad=s[i]-'0';
        for (int j = 0 ; j < len ; j++)
        {
            sum[j] = sum[j] + ad;
            sum[j+1] += sum[j] / 10;
            sum[j] = sum[j] % 10;
        }
        if (sum[len] != 0) len++; 
    	while (sum[len - 1] == 0 && len>1) len--;
    }
    for (int i = len - 1 ;i >= 0 ;i--)
		cout << shu[sum[i]] << " "; 
    return 0;
}