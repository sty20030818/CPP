#include<cstdio>
#include<vector>
#include<iostream>
using namespace std;
// //初始化
// //方式一：初始化一维可变长数组
// vector<int>num; //定义了一个名为num的存int数据的一维数组
// vector<double>num;//定义了一个名为num的存double数据的一维数组
// vector<node>num;//node是结构体类型

// //方式二：初始化二维可变长数组
// vector<int>num[5];//定义可变长二维数组
// //注意：行是不可变的（只有5行），而列可变可以在指定行添加元素
// //第一维固定长度为5，第二维长度可以改变

// //方式三:初始化二维均可变长数组
// vector<vectot<int> >num;//定义一个行和列均可变的二维数组

//初始化技巧
// //1.附加长度
// vector<int >v(n);//定义一个长度为n的数组，动态定义
// //2.附加长度和初始值
// vector<int>v(n，0);//所有的元素均为0

// c.front()	            返回第一个数据
// c.pop_back()	            删除最后一个数据 O(1)
// c.push_back(element)	    在尾部加一个数据 O(1)
// c.size()	                返回实际数据个数（unsigned类型） O(1)
// c.clear()	            清除元素个数 O(N),N为元素个数
// c.resize(n,v)	        改变数组大小为n,n个空间数值赋为v，如果没有默认赋值为0
// c.insert(it,x)	        向任意迭代器it插入一个元素x O(N)
// 例：c.insert(c.begin()+2,-1)	将-1插入c[2]的位置
// c.erase(first,last)	    删除[first,last)的所有元素
// c.begin()	            返回首元素的迭代器（通俗来说就是地址）
// c.end()	                返回最后一个元素后一个位置的迭代器（地址）
// c.empty()	            判断是否为空，为空返回真，反之返回假
int main()
{
    int i=0;
    vector<int> vec;
    for(i=0; i<10; i++)
    {
        vec.push_back(i);//10个元素依次进入，结果为10
    }

    for(unsigned int i=0; i<vec.size(); i++)
    {
        cout<<"初始化遍历："<<vec[i]<<endl;
    }
    //结果为：０，１，２，３，４，５，６，７，８，９
    cout << endl;
    cout << "智能指针" << endl;
    for(auto i : vec)
	    cout << vec[i] << endl;
    //智能指针
    vector<int>::iterator it;

    for(it = vec.begin(); it!=vec.end(); it++)
    {
        cout<<"迭代遍历："<<*it<<endl;
    }
    //结果为：０，１，２，３，４，５，６，７，８，９
    vec.insert(vec.begin()+4,0);
    //结果为:11
    for(unsigned int i=0; i<vec.size(); i++)
    {
        cout<<"插入遍历："<<vec[i]<<endl;
    }
    cout<<"数组大小："<<vec.size()<<endl;
    //结果为：０，１，２，３，０，４，５，６，７，８，９
    vec.erase(vec.begin()+2);
    for(unsigned int i=0; i<vec.size(); i++)
    {
        cout<<"擦除遍历："<<vec[i]<<endl;
    }
    //结果为：０，１，３，０，４，５，６，７，８，９
    vec.erase(vec.begin()+3,vec.begin()+5);

    for(vector<int>::iterator it = vec.begin(); it!=vec.end(); it++)
    {
        cout<<"迭代遍历："<<*it<<endl;
    }
    return 0;
}
