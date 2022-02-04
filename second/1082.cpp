#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

struct note
{
    string num;
    double score;
}stu[10001];

bool cmp(const note &a,const note &b)
{
    return a.score < b.score;
}

int main()
{
    int n, x, y;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> stu[i].num >> x >> y ;
        stu[i].score = sqrt(x * x + y * y);
    }
    sort(stu,stu+n,cmp);
    cout << stu[0].num << " " << stu[n-1].num;
    return 0;
}