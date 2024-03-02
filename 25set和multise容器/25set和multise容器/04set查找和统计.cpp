#include<iostream>
using namespace std;
#include<set>

//set容器 查找和统计

void printSet(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	//查找
	set<int>s1;


	//插入数据
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);


	set<int>::iterator pos = s1.find(30);

	if (pos != s1.end())
	{
		cout << "找到元素：" << *pos << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}
}

void test02()
{
	//查找
	set<int>s1;


	//插入数据
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	s1.insert(30);
	s1.insert(30);

	//统计30的个数
	int num = s1.count(30);
	//对于set而言 统计结果 要么是0 要么是1
	cout << "num = " << num << endl;
}

int main() {

	//test01();
	test02();


	system("pause");
	return 0;
}