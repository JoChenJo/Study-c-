#include <iostream>
using namespace std;

//����ѧ���ṹ��
struct student
{
	string name;//����
	int age;//����
	int score;//����
};

//������ʦ�ṹ��
struct teacher
{
	int id;//��ʦ���
	string name;//��ʦ����
	int age;//��ʦ����
	struct student stu;
};


int main04() {

	//�ṹ��Ƕ�׽ṹ��

	//������ʦ
	teacher t;
	t.id = 1000;
	t.name = "����";
	t.age = 50;
	t.stu.name = "С��";
	t.stu.age = 20;
	t.stu.score = 60;

	cout << " ��ʦ������" << t.name << " ��ʦ��ţ�" << t.id << " ��ʦ���䣺 " << t.age
		<< " ��ʦ������ѧ�������� " << t.stu.name << " ѧ�����䣺 " << t.stu.age << " ѧ�����Է����� " << t.stu.score << endl;





	system("pause");
	return 0;
}