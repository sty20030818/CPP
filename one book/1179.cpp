#include<iostream>
using namespace std;
struct student
{
	int id;
	int chiness;
	int math;
	int english;
	int total_points;
}stu[300];
int n,x;

void selectsort(int n)
{
	for(int i=0;i<n;i++)
    {
		x=i;
		for(int j=i;j<n;j++)
        {
			if(stu[j].total_points>stu[x].total_points)
                x=j;
		}
		if(i!=x) swap(stu[i],stu[x]);
	}
	for(int i=0;i<n;i++)
    {
		if(stu[i].total_points==stu[i+1].total_points
                &&stu[i].chiness<stu[i+1].chiness)
            swap(stu[i],stu[i+1]);
		else if(stu[i].total_points==stu[i+1].total_points
		        &&stu[i].chiness==stu[i+1].chiness
		        &&stu[i].id>stu[i+1].id)
			swap(stu[i],stu[i+1]);
	}
}

int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
    {
		cin>>stu[i].chiness>>stu[i].math>>stu[i].english;
		stu[i].id=i+1;
		stu[i].total_points=stu[i].chiness+stu[i].math+stu[i].english;
	}
	selectsort(n);
	for(int i=0;i<5;i++)
		cout<<stu[i].id<<" "<<stu[i].total_points<<endl;
	return 0;
}