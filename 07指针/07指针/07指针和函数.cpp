#include <iostream>
using namespace std;

//ʵ���������ֽ��н���
void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
void swap02(int* p, int* p2)
{
	int temp = *p;
	*p = *p2;
	*p2 = temp;
}

int main07() {

	//ָ��ͺ���
	//1��ֵ����
	int a = 10;
	int b = 20;
	//swap01(a, b);


	//2����ַ����
	//����ǵ�ַ���ݣ���������ʵ��
	swap02(&a, &b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	




	system("pause");
	return 0;
}