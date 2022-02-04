#include <iostream>
using namespace std;
string name,bestname;

int main()
{
	int i,tmp=0,n,sum=0,max=0,score1,score2,num;
	bool a,b;
	char c1,c2;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> name >> score1 >> score2 >> c1 >> c2 >> num;
		a=c1=='Y';
		b=c2=='Y';
		tmp=0;
		if((score1>80) && (num>0))      // 院士奖学金 
			tmp+=8000;
		if((score1>85) && (score2>80))  // 五四奖学金 
			tmp+=4000;
		if(score1>90)    // 成绩优秀奖 
			tmp+=2000;
		if(b && (score1>85))  // 西部奖学金 
			tmp+=1000;
		if(a && (score2>80))  // 班级贡献奖 
			tmp+=850;
		sum+=tmp;    // 奖学金总数
		if(tmp>max)
		{
			max=tmp;
			bestname=name;
		}
	}
	cout << bestname << endl;
	cout << max << endl;
	cout << sum << endl;
	return 0;
}