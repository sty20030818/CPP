#include <iostream>
using namespace std;

int main()
{
    int t,n;
    int a,b;
    string s,cmp;
    bool flag;
    scanf("%d",&t);
    while(t--)
    {
        cin >> n >> s;
        if(n < 8)
        {
            printf("impossible\n");
            continue;
        }
        flag=false;
        for(int i=0;i<n-7;i++)
        {
            cmp=s.substr(i,8);
            a=b=0;
            for(int j=0;j<8;j++)
            {
                if(cmp[j]=='a') a++;
                if(cmp[j]=='b') b++;
            }
            if(a == b && a == 4)
            {
                printf("%d %d\n",i+1,i+8);
                flag=true;
                break;
            }
        }
        if(!flag) printf("impossible\n");
    }
    return 0;
}

// #include<iostream>
// using namespace std;

// int main()
// {
//     char tmp[10001];
//     int t,n;
//     int a,b,x;
//     int i;
//     scanf("%d",&t);
//     while(t--)
//     {
//         scanf("%d%d%s",&n,&x,tmp);
//         a=0;b=0;
//         if (n < x)
//         {
//             printf("impossible\n");
//             continue;
//         }
        
//         for(i=0;i<n;i++)
//         {
//             if(i>=x)
//             {
//                 if(tmp[i-x] == 'a')a--;
//                 else b--;
//             }
//             if(tmp[i] == 'a') a++;
//             else b++;

//             if(a == b) break;
//         }
//         if(a == b) printf("%d %d\n",i-x+2,i+1);
//         else printf("impossible\n");
//     }
//     return 0;
// }
