#include<iostream>
using namespace std;
#include<vector>
#include<functional>
#include<algorithm>

//内建逻辑对象_逻辑仿函数
//逻辑非 logical_not

/*
template<class T> bool logical_and<T>		//逻辑与
template<class T> bool logical_or<T>		//逻辑或
template<class T> bool logical_not<T>		//逻辑非
*/

void test01()
{
	vector<bool>v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);

	for (vector<bool>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//利用逻辑非  将容器v 搬运到容器v2中，并执行取反操作
	vector<bool>v2;
	v2.resize(v.size());
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	for (vector<bool>::const_iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main() {

	test01();



	system("pause");
	return 0;
}