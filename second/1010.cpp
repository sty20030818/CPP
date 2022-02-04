#include <iostream>
using namespace std;

int main()
{
    int n,m;
    bool flag=true;
    while(cin >> n >> m)
    {
        if(!flag) cout << " ";
        if(m*n) cout << n*m << " " << m-1;
        if(flag) flag =false;
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n,m;
//     while(cin >> n >> m)
//         if(n*m) cout << n*m << " " << m-1 << " ";
//     return 0;
// }