// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int k=0;
// 	int n,m;
//     int a[101][101];
//     int b[101][4];
//     scanf("%d %d",&n,&m);
//     for(int i=1;i<=n;i++)
//     	for(int j=1;j<=m;j++)
//     		scanf("%d",&a[i][j]);//输入
//      for(int i=1;i<=n;i++)
//     	for(int j=1;j<=m;j++)
//             if(a[i][j]!=0)
//             {
//                 k++;
//                 b[k][1]=i;
//                 b[k][2]=j;
//                 b[k][3]=a[i][j];
//             }

// 	for(int i=1;i<=k;i++)
//     {
// 		for(int j=1;j<=3;j++)
// 			printf("%d ",b[i][j]);
//         printf("\n");
// 	}
// 	return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int n;
// 	cin>>n;
// 	int a[21][21];
// 	for(int i=1;i<=n;i++){
// 	    for(int j=1;j<=n;j++){
// 	    	if(i=1||j=1||)//判断是否是第一行第一列和每行数组的末尾
// 		}

// }


#include <iostream>
using namespace std;

int main()
{
    int cnt = 1,a;
    cin >> a;
    while(a > 70)
    {
        a -= 70;
        cnt ++;
    }
    cout << cnt << endl;
    return 0;
}
