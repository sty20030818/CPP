#include<bits/stdc++.h>
using namespace std;
string a;
stack<char> s;
int main(){
    cin>>a;
    int n=a.length();
    for(int i=0;i<n;i++){
        if(a[i]=='('){
            s.push('(');
        }else if(a[i]==')'){
            s.pop();
        }
    }
    if(s.empty()){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
