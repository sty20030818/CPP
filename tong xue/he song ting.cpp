// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     char ch;
// 	while(scanf("%c",&ch)==1)
// 	{
// 		if(ch>='a'&&ch<='y')
// 		ch=ch+1;
// 		else if(ch='z')
// 		ch=ch-25;
// 		else if(ch>='A'&&ch<='y')
// 		ch=ch+1;
// 		else if(ch='Z')
// 		ch=ch-25;
// 		printf("%c",ch);
// 	}

// 	return 0;
// }


#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == 'z' || s[i] == 'Z') s[i] -= 25;
        else if(s[i] >= 'a' && s[i] <= 'y' || s[i] >= 'A' && s[i] <= 'Y')
            s[i] += 1;
    }
    cout << s;
    return 0;
}
