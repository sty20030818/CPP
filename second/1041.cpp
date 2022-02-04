#include <bits/stdc++.h>
using namespace std;

struct node
{
    char name[20];
    int num;
    int num2;
}stu[1005];

int main()
{
    int n,t;
    int a;
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> stu[i].name >> stu[i].num >> stu[i].num2;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >> a;
        for(int j=0;j<n;j++)
            if(stu[j].num == a)
                cout << stu[j].name <<" "<< stu[j].num2 << endl;
    }
    return 0;
}