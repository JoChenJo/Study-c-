#include <iostream>
using namespace std;
#include<string>

//�ṹ������
//1������ṹ��
struct Student
{
	//����
	string name;
	//����
	int age;
	//����
	int score;
};


int main02() {

	//2�������ṹ������
	struct Student stdArray[3] =
	{
		{" ����" , 18 , 100 },
		{" ����" , 28 , 99 },
		{" ����" , 38 , 66 }
	};

    //3�����ṹ�������е�Ԫ�ظ�ֵ
	stdArray[2].name = "����";
	stdArray[2].age = 80;
	stdArray[2].score = 60;

    //4�������ṹ������
	for (int i = 0;i < 3;i++)
	{
		cout << " ������" << stdArray[i].name
			<< " ���䣺" << stdArray[i].age
			<< " ������" << stdArray[i].score << endl;
	}




	system("pause");
	return 0;
}