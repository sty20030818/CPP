//ģ�� 
#include <bits/stdc++.h>  //����ͷ�ļ� 
using namespace std;  //ʹ�ñ�׼�����ռ�(����д�Ͼ���) 
int main()  //����һ������Ϊ���ε�������main 
{
	...... 
	return 0; 
}   //����Ϊһ������Ŀ�ܲ���


//��һ������ ���Hello World��
#include <iostream>
using namespace std;
int main()
{
	printf("Hello world!");  //����������ǵ��������Ҫ������ 
	//ƽʱ����ʱ��Ҫ��������Ĵ�Сд�Լ��ո�����
	//��Ȼ�������ǶԵ�����ʽ�����˾ͻ�����ܵ� 
	printf("\n");  //���� 
	return 0; 
} 


//�ڶ����������������Լ�ȡģ����
#include <iostream>
using namespace std;
int main()
{
	printf("123+456=%d\n",123+456); //%d��ռλ��(����), ������������ı��� 
	//��Ȼ123+456��λ�ÿ���д�κ����� 
	printf("5/2=%d\n",5/2);  //��������������,�ͽ�����,����������2
	printf("5%2=%d\n",5%2);  //%����ȡģ����,��������
	//��ܰ��ʾ,ֻ������������ȡģ���� 
	//int -> %d   ���� 
	//long -> %ld   ������ 
	//long long ->%lld   �������� 
	//float -> %f   ������ʵ�� 
	//double -> %lf   ˫����ʵ�� 
	//char -> %c   �ַ� 
} 

//����������
#include <iostream>
using namespace std;
int main()
{
	int a,b;  //������������Ϊ���͵ı��� 
	scanf("%d %d",&a,&b);  //���뺯��,�ǵ�Ҫ�ڱ���ǰ����ȡ��ַ������Ȼ���л����Ŷ
	printf("%d",a+b);
	//�������ֺ����÷�һ��,������������,���и��ĺô��Ͳ������� 
	cin>>a>>b;
	cout<<a+b<<endl; //endl�ǻ���,�൱��\n 
} 


//���ĸ����� ������� 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double high;  //����һ��˫����ʵ�� 
    high=150*2/15;  //����� 
    double area=((15+25)*high)/2;  //������һ������������� 
    printf("%.2f",area);   // %.2f �� %0.2f �����С��ʱ������λ����˼ 
	return 0;
}

