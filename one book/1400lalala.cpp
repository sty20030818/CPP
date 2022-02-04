#include<iostream>
#include<cstring>
#include<cstdio>
#include<string>
using namespace std;
string word,sentence,sentence2;
int len1,len2;
int i,j;
int ans=0,direction;

int main()
{
    getline(cin,word);
    getline(cin,sentence);
    len1=word.size();
    len2=sentence.size();
    for(i=0;i<len2;i++)
    {
        for(j=0;j<len1;j++)
        {
            if(sentence[i+j]>='A'&&sentence[i+j]<='Z')
                sentence2[i+j]=sentence[i+j]+32;
            else
                sentence2[i+j]=sentence[i+j];
            if(word[j]>='A'&&word[j]<='Z')
                word[j]=word[j]+32;
            if(sentence2[i+j]!=word[j]) break;
            if(i>0&&sentence[i-1]!=' ')	break;
        }
        if(j==len1&&(sentence[i+j]==' '||j+i==len2))
        {
            ans++;
            if(ans==1)
                direction=i;
        }
    }
    if(ans)	cout<<ans<<" "<<direction<<endl;
    else cout<<"-1"<<endl;
    return 0;
}