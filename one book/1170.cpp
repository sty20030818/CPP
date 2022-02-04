#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
const int N = 50;
int ans[N];

// vector<int> mul(vector<int> &A, int b)
// {
//     vector<int> C;

//     int t = 0;
//     for (int i = 0; i < A.size() || t; i ++ )
//     {
//         if (i < A.size()) t += A[i] * b;
//         C.push_back(t % 10);
//         t /= 10;
//     }
//     while (C.size() > 1 && C.back() == 0) C.pop_back();

//     return C;
// }

int main()
{
	int n;
	cin>>n;
	
	ans[0] = 1;
	int tmp, up=0;
	
	for(int i=1;i<=n;i++)   
	{
		for(int j=0;j<N;j++) 
		{
			tmp = ans[j]*2 + up;
			up = tmp/10;
			ans[j] = tmp%10;
		}
	}
	
	for(int i=N;i>=0;i--)
	{
		if(ans[i])
		{
			for(int j=i;j>=0;j--)
				cout<<ans[j];
			break;
		}
	}
	return 0;
}
 

