// ConsoleApplication5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include<deque>
#include <algorithm>//意为"算法",是C++的标准模版库（STL）中最重要的头文件之一，提供了大量基于迭代器的非成员模版函数。
using namespace std;



/*int main()
{
	vector <int> v;//定义vector容器 vector名称 int为传入参数类型 v变量,创建10个空间，初值为0
	v.push_back(40); //向容器里面插入10；
	v.push_back(20);
	v.push_back(80);
	v.push_back(10);
	sort(v.begin(), v.end());//对容器里面的数据进行排序
	vector <int>::iterator it=v.begin(); //使用迭代器
	it = v.insert(it, 9);
	++it;
	it = v.insert(it, 3, 2);

	cout << *it << endl;
	for (it = v.begin();it<v.end();it++)
	{
		cout << *it << endl;
	}
	
 	cout << v.size() << endl; //看容器里面插入个数 //10+4
	cout << v.empty() << endl;//判断容器内是否为空
	cout << v.front() << endl;
	cout << v.back() << endl;
	v.pop_back();
	cout << v.back() << endl;

	v.clear();//清空容器内的元素
	cout << v.empty() << endl;		
	return 0;
}*/
/*int main()
{
vector <int> v;
v.resize(15,0);
v.push_back(3);
v.push_back(5);
cout << v.size() << endl;
cout << v.capacity() << endl;
}*/
void print(const deque<int>&d)
{
	for (deque<int>::const_iterator i=d.begin();i<d.end();i++)
	{
		cout << *i << " ";
	}
	cout << endl;
}
int main()
{
	deque<int>d;
	for (int i=0;i<10;i++)
	{
		d.push_back(i);
	}
//	print(d);
	//将d的数据赋值给d2
	deque<int>d2;
	d2 = d;
	print(d2);
	//采用assign函数将d的数据赋值给d3
	deque<int>d3;
	d3.assign(d.begin(),d.end());
	print(d2);
	//采用assign函数将自定义数据赋值给容器d4
	deque<int>d4;
	d4.assign(10, 20);//10个20
	print(d4);
	//deque.resize(30);
//	print(d4);
	cout << d4.empty() << endl;
	cout << d4.size() << endl;
	


}



