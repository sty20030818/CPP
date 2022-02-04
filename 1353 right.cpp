#include<bits/stdc++.h>
using namespace std;
char a[256];
stack<char> s;
int main(){
    cin>>a;
    int n= strlen(a);
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
