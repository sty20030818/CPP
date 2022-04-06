#include <iostream>
using namespace std;

int a[101] = {5,7,1,3,2};
int n = 5;

void bubble_sort()
{
    int temp;
    for(int i = 0;i < n - 1;i++)
    {
        for(int j = 0;j < n - 1 - i;j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main()
{
    bubble_sort();
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
    cout << endl;
}
