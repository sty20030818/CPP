#include <iostream>
using namespace std;

int a[101]={5,7,2,10,1};
int len = 5;

void bubble_sort()
{
    int temp;
    for(int i = 0; i < len - 1; i++)
    {
        for(int j = 0; j < len - i - 1; j++)
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
    for(int i=0;i<len;i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}
