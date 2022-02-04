//模板 
#include <bits/stdc++.h>  //万能头文件 
using namespace std;  //使用标准命名空间(反正写上就行) 
int main()  //定义一个类型为整形的主函数main 
{
	...... 
	return 0; 
}   //以上为一个程序的框架部分


//第一个程序 输出Hello World！
#include <iostream>
using namespace std;
int main()
{
	printf("Hello world!");  //输出函数，记得输出的需要加引号 
	//平时做题时需要考虑输出的大小写以及空格问题
	//不然明明答案是对的最后格式不对了就会很难受的 
	printf("\n");  //换行 
	return 0; 
} 


//第二个内容四则运算以及取模运算
#include <iostream>
using namespace std;
int main()
{
	printf("123+456=%d\n",123+456); //%d叫占位符(好像), 代表引号外面的变量 
	//当然123+456的位置可以写任何运算 
	printf("5/2=%d\n",5/2);  //如果两个整数相除,就叫整除,运算结果等于2
	printf("5%2=%d\n",5%2);  //%叫做取模运算,即求余数
	//温馨提示,只有整数可以用取模运算 
	//int -> %d   整型 
	//long -> %ld   长整型 
	//long long ->%lld   超长整型 
	//float -> %f   单精度实数 
	//double -> %lf   双精度实数 
	//char -> %c   字符 
} 

//第三个程序
#include <iostream>
using namespace std;
int main()
{
	int a,b;  //定义两个类型为整型的变量 
	scanf("%d %d",&a,&b);  //输入函数,记得要在变量前加上取地址符，不然运行会出错哦
	printf("%d",a+b);
	//上下两种函数用法一样,都是输入和输出,各有各的好处就不多提了 
	cin>>a>>b;
	cout<<a+b<<endl; //endl是换行,相当于\n 
} 


//第四个程序 梯形面积 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double high;  //定义一个双精度实数 
    high=150*2/15;  //算出高 
    double area=((15+25)*high)/2;  //定义另一个变量来算面积 
    printf("%.2f",area);   // %.2f 或 %0.2f 是输出小数时保留两位的意思 
	return 0;
}

