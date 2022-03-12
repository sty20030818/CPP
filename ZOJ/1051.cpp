#include <iostream>
#include <fstream>
using namespace std;

#define MAXSIZE	  20
#define RULECOUNT 16

int iDay, iMap[MAXSIZE+2][MAXSIZE+2], iRule[RULECOUNT];
const int DIR[4][2] = {{0, -1}, {-1, 0}, {0, 1}, {1, 0}};

inline int Min(int x, int y)
{
    return(x < y ? x : y);
}

inline int Max(int x, int y)
{
    return(x > y ? x : y);
}

void Simulate()
{
    int iNewMap[MAXSIZE+2][MAXSIZE+2];
	int k, i, j, t, d;

	for(t = 0; t < iDay; t++)
	{
        for(i = 1; i <= MAXSIZE; i++)
		{
            for(j = 1; j <= MAXSIZE; j++)
			{
                k = iMap[i][j];
				for(d = 0; d < 4; d++)
					k += iMap[i+DIR[d][0]][j+DIR[d][1]];
				iNewMap[i][j] = iMap[i][j] + iRule[k];
				iNewMap[i][j] = Max(0, iNewMap[i][j]);
				iNewMap[i][j] = Min(3, iNewMap[i][j]);
			}
		}
		for(i = 1; i <= MAXSIZE; i++)
			for(j = 1; j <= MAXSIZE; j++)
                iMap[i][j] = iNewMap[i][j];
	}
}

void Output()
{
	for(int i = 1; i <= MAXSIZE; i++)
	{
        for(int j = 1; j <= MAXSIZE; j++)
		{
            switch(iMap[i][j])
			{
                case 0: cout<<"."; break;
                case 1: cout<<"!"; break;
                case 2: cout<<"X"; break;
                case 3: cout<<"#"; break;
			}
		}
		cout<<endl;
	}
}

int main()
{	//ifstream cin("test.txt");
	int n, i, j, k, iCase;

	cin>>n;
	for(iCase = 0; iCase < n; iCase++)
	{
        if(iCase > 0) cout<<endl;
		cin>>iDay;
		for(i = 0; i < RULECOUNT; i++) cin>>iRule[i];
		for(j = 1; j <= MAXSIZE; j++)
			for(k = 1; k <= MAXSIZE; k++)
				cin>>iMap[j][k];
		for(i = 0; i < MAXSIZE+2; i++)
		{
            iMap[0][i] = 0;
            iMap[i][0] = 0;
			iMap[MAXSIZE+1][i] = 0;
			iMap[i][MAXSIZE+1] = 0;
		}
		Simulate();
		Output();
	}
	return 0;
}
