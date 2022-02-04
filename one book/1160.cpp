#include <iostream>
#include <cstring>
using namespace std;
char s[1001];

int main()
{
    gets(s);
    int len=strlen(s);
    for(int i=len;i>=0;i--)
        printf("%c",s[i]);
    return 0;
}