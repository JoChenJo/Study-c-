#include <iostream>
using namespace std;
int main04() {

//1���ַ��ͱ���������ʽ
	char ch = 'a';
	cout << ch << endl;
//2���ַ��ͱ�����ռ�ڴ��С
	cout << "char�ַ��ͱ�����ռ�ڴ��СΪ��" << sizeof(char) << endl;

//3���ַ��ͱ�����������
	//char ch1 = "b";//�����ַ��ͱ���ʱ��Ҫ�õ�����
	//char ch1 = 'abcdef';//�����ַ��ͱ���ʱ�򣬵�������ֻ����һ���ַ�

//4���ַ��ͱ�����ӦASCII����
	//a - 97
    //A - 65

	cout << (int)ch << endl;
	int ch1 = 97;
	cout << (char)ch1 << endl;


	system("pause");
	return 0;
}