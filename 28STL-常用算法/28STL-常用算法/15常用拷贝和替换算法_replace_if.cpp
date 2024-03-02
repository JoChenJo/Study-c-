#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;

//���ÿ������滻�㷨 replace_if

class MyPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

class Greater30
{
public:
	bool operator()(int val)
	{
		return val >= 30;
	}
};

void test01()
{
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(40);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(30);

	//�����ڵ���30  �滻Ϊ3000
	cout << "�滻ǰ��" << endl;
	for_each(v.begin(), v.end(), MyPrint());
	cout << endl;

	cout << "�滻��" << endl;
	replace_if(v.begin(), v.end(), Greater30(), 3000);
	for_each(v.begin(), v.end(), MyPrint());
	cout << endl;
}

int main() {

	test01();



	system("pause");
	return 0;
}