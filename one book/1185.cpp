#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

const int MAXN = 1e2+5;
string words[MAXN];

int main()
{
    int n=0;
    while (cin >> words[n])
        n++;

    sort(words,words+n);
    n = unique(words,words+n)-words;
    
    for(int i=0;i<n;i++)
        cout << words[i] << endl;
    
    return 0;
}