// #include <iostream>
// using namespace std;

// int main()
// {
//     int n,m;
//     cin >> n >> m;
//     int ans=0,cnt=0,a,answer=0,count=0;
//     for(int j=0;j<n;j++)
//     {
//         cin >> a;
//         if(ans + a <= m)
//         {
//             ans += a;
//             cnt++;
//         }  
//         if(ans == m)
//         {
//             answer++;
//             ans = 0;
//             count += cnt;
//             cnt = 0;
//         }
//     }
//     cout << answer << " " << count;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// struct node
// {
//     string num;
//     int k;
//     char s[11][8];
//     int answer[11];
// }stu[10001];

// int flag[100001]={0};

// int main()
// {
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++)
//     {
//         cin >> stu[i].num >> stu[i].k;
//         for(int j=0;j<stu[i].k;j++)
//         {
//             cin >> stu[i].s[j];
//             stu[i].answer[j] = 0;
//             for(int a=2;a<7;a++)
//             {
//                 stu[i].answer[j] *= 10;
//                 stu[i].answer[j] += stu[i].s[j][a] - '0';
//             }
//             flag[stu[i].answer[j]]++;
//         }
//     }
//     int maxx=0,cnt=0;
//     int x;
//     for(int i=0;i<100000;i++)
//         if(flag[i] > maxx)
//         {
//             maxx = flag[i];
//             x = i;
//         }
//     cout << "MD";
//     if(x<10) cout << "0000";
//     else if(x<100) cout << "000";
//     else if(x<1000) cout << "00";
//     else if(x<10000) cout << "0";
//     cout << x << " ";
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<stu[i].k;j++)
//             if(stu[i].answer[j] == x) cnt++;
//     }
//     cout << cnt << endl;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<stu[i].k;j++)
//             if(stu[i].answer[j] == x) cout << stu[i].num << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// struct node
// {
//     string s;
//     int a,b,c;
// }rgb[100001];

// bool flag[256][256][256];
// char sss[100001][12];

// int main()
// {
//     int n,cnt=0;
//     cin >> n;
//     for(int i=0;i<n;i++)
//     {
//         cin >> rgb[i].s;
//         for(int j=0;j<3;j++)
//         { 
//             rgb[i].a *= 10;
//             rgb[i].a += rgb[i].s[j] - '0';
//         }
//         for(int j=4;j<7;j++)
//         { 
//             rgb[i].b *= 10;
//             rgb[i].b += rgb[i].s[j] - '0';
//         }
//         for(int j=8;j<11;j++)
//         { 
//             rgb[i].c *= 10;
//             rgb[i].c += rgb[i].s[j] - '0';
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         if(!flag[rgb[i].a][rgb[i].b][rgb[i].c])
//         {
//             cnt++;
//             flag[rgb[i].a][rgb[i].b][rgb[i].c]=true;
//             for(int k=0;k<12;k++)
//             {
//                 sss[cnt][k] = rgb[i].s[k];
//             }
//         }
//     }
//     cout << cnt << endl;
//     for(int i=1;i<cnt;i++)
//         cout << sss[i] << " ";
//     cout << sss[cnt] << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int gd[101];
    int a;
    double score=0;
    int cnt=0;
}stu[10001];

int flag[20001];

int main()
{
    int n,m;
    cin >> n >> m;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin >> stu[j].gd[i];
    for(int i=0;i<m;i++)
    {
        memset(flag,0,sizeof(flag));
        for(int j=0;j<n;j++)
        {
            if(stu[j].gd[i] < 0) flag[-stu[j].gd[i]+10000]++;
            else flag[stu[j].gd[i]]++;
        }
        for(int j=0;j<n;j++)
        {
            if(stu[j].gd[i] < 0) stu[j].score = (n-flag[-stu[j].gd[i]+10000]) * 1.0 / n; 
            else stu[j].score = (n-flag[stu[j].gd[i]]) * 1.0 / n; 
            if(stu[j].score==0) stu[j].score=1;
            //cout << stu[j].score << " ";
        }
        //cout << endl;
        double maxx = 0;
        for(int j=0;j<n;j++)
            if(stu[j].score > maxx) maxx = stu[j].score;
        //cout << " max=" << maxx << endl;
        for(int j=0;j<n;j++)
            if(stu[j].score == maxx) stu[j].cnt++;
    }
    int maxxx=0;
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        if(stu[i].cnt > maxxx)
        {
            maxxx = stu[i].cnt;
            ans = i+1;
        }
    }
    cout << ans << endl;
    return 0;
}
