#include <iostream>
using namespace std;

int a[101] = {5,7,1,3,2};
int n = 5;

void choose_sort()
{
    int minn;
    for(int i = 0; i < n; i++)
    {
        minn = i;
        for(int j = i + 1; j < n; j++)
            if(a[minn] > a[j]) minn = j;
        if(i != minn) swap(a[i],a[minn]);
    }
}

int main()
{
    choose_sort();
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}
