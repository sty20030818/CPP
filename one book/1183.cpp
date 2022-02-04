#include <iostream>
#include <algorithm>
using namespace std;

typedef struct note
{
    int idx;
    char id[12];
    int age;
}stu;
const int MAXN=1e2+2;
stu nums[MAXN];

bool cmp(const stu&x,const stu&y)
{
    if(x.age>=60 && y.age>=60)
    {
        if(x.age!=y.age)
            return x.age>y.age;
        else
            return x.idx<y.idx;
    }
    else if(x.age<60 && y.age<60)
        return x.idx<y.idx;
    else if(x.age>=60 && y.age<60)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>nums[i].id>>nums[i].age;
        nums[i].idx=i;
    }
    sort(nums,nums+n,cmp);
    for(int i=0;i<n;i++)
        cout<<nums[i].id<<endl;
    return 0;
}
