#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[101];
    int n,len;
    bool a1 = false,a2 = false,a3=false;
    char c;
    cin >> n;
    while(n--)
    {
        cin >> s;
        len = strlen(s);
        if(len < 6)
        {
            printf("Your password is tai duan le.\n");
            continue;
        }
        a1 = a2 = a3 =false;
        while(len--)
        {
            if(s[len] >= 'a' && s[len] <= 'z')
                a1 = true;
            else if(s[len] >= 'A' && s[len] <= 'Z')
                a1 = true;
            else if(s[len] >= '0' && s[len] <= '9')
                a2 = true;
            else if(s[len] != '.')
            {
                printf("Your password is tai luan le.\n");
                a3 = true;
                break;
            }
        }
        if(!a3)
        {
            if(a1 && a2) printf("Your password is wan mei.\n");
            else if(a1) printf("Your password needs shu zi.\n");
            else if(a2) printf("Your password needs zi mu.\n");
        }
    }
    return 0;
}
