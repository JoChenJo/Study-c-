#include<iostream>
using namespace std;

//�ַ����Ƚ�

void test01()
{
	string str1 = "hellow";
	string str2 = "xellow";

	if (str1.compare(str2) == 0)
	{
		cout << "str1 ���� str2" << endl;
	}
	else if (str1.compare(str2) > 0)
	{
		cout << "str1 ���� str2" << endl;
	}
	else
	{
		cout << "str1 С�� str2" << endl;
	}
}

int main() {

	test01();




	return 0;
}