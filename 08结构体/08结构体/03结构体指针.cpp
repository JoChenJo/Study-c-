#include <iostream>
using namespace std;

//�ṹ��ָ��
struct student
{
	string name;//����
	int age;//����
	int score;//����
};

int main03() {

	//1������ѧ���ṹ�����
	struct student s = { "����" , 18 , 100 };

	//2��ͨ��ָ��ָ��ṹ�����
	struct student* p = &s;

	//3��ͨ��ָ��ܷ��ʽṹ������е�����
	//ͨ���ṹ��ָ�� ���ʽṹ���е����ԣ���Ҫ����' -> '
	cout << "������" << p->name << "���䣺" << p->age << "����" << p->score << endl;


	system("pause");
	return 0;
}