// ConsoleApplication5.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include<deque>
#include <algorithm>//��Ϊ"�㷨",��C++�ı�׼ģ��⣨STL��������Ҫ��ͷ�ļ�֮һ���ṩ�˴������ڵ������ķǳ�Աģ�溯����
using namespace std;



/*int main()
{
	vector <int> v;//����vector���� vector���� intΪ����������� v����,����10���ռ䣬��ֵΪ0
	v.push_back(40); //�������������10��
	v.push_back(20);
	v.push_back(80);
	v.push_back(10);
	sort(v.begin(), v.end());//��������������ݽ�������
	vector <int>::iterator it=v.begin(); //ʹ�õ�����
	it = v.insert(it, 9);
	++it;
	it = v.insert(it, 3, 2);

	cout << *it << endl;
	for (it = v.begin();it<v.end();it++)
	{
		cout << *it << endl;
	}
	
 	cout << v.size() << endl; //���������������� //10+4
	cout << v.empty() << endl;//�ж��������Ƿ�Ϊ��
	cout << v.front() << endl;
	cout << v.back() << endl;
	v.pop_back();
	cout << v.back() << endl;

	v.clear();//��������ڵ�Ԫ��
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
	//��d�����ݸ�ֵ��d2
	deque<int>d2;
	d2 = d;
	print(d2);
	//����assign������d�����ݸ�ֵ��d3
	deque<int>d3;
	d3.assign(d.begin(),d.end());
	print(d2);
	//����assign�������Զ������ݸ�ֵ������d4
	deque<int>d4;
	d4.assign(10, 20);//10��20
	print(d4);
	//deque.resize(30);
//	print(d4);
	cout << d4.empty() << endl;
	cout << d4.size() << endl;
	


}



