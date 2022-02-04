#include <iostream>
#include <algorithm>
using namespace std;
string s,t;

int main()
{
	getline(cin,s);
	s=s.substr(0,s.size()-1);
	t=s;
	reverse(t.begin(),t.end());
	if(t==s) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}

