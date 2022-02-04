// #include<iostream>
// #include<algorithm>
// using namespace std; 
// int flag[100001];

// int unique(int a[],int size)
// {
//     int ans=0;
//     for(int i=0;i<size;i++)     //1 1 2 4 5
//     {
//         if(flag[ a[i] ] == 0) flag[ a[i] ]++;
//         else ans++;
//     }
//     return size - ans;
// }

// int main()
// {
//     int n,s;
//     int x[10001];
//     cin >> n >> s;
//     for(int i=0;i<n;i++)
//         cin >> x[i];
//     cout << n - s + unique( x ,s );
//     return 0;
// }

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

struct node  //结构体
{
    string num;
    double score;
}stu[101];

bool compare(const node&x,const node&y)
{
    return x.score > y.score;
}

int main()
{
    int n,m;
    cin >> n >> m;
    for(int i=0;i<n;i++)
        cin >> stu[i].num >> stu[i].score;
    sort(stu,stu+n,compare); //规则
    cout << stu[m-1].num << " " << stu[m-1].score << endl;
    return 0;
}