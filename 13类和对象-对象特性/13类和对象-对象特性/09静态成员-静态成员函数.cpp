#include <iostream>;
using namespace std;

//��̬��Ա����
//���ж�����ͬһ������
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

class Person
{
public:

	//��̬��Ա����
	static void func()
	{
		m_A = 100;//��̬��Ա�������Է��ʾ�̬��Ա����
		//m_B = 200;//��̬��Ա����  �����Է���  �Ǿ�̬��Ա�������޷����ֵ������Ǹ������m_B
		cout << "static void func����" << endl;
	}

	static int m_A;//��̬��Ա����
	int m_B;//�Ǿ�̬��Ա����

	//��̬��Ա����Ҳ���з���Ȩ�޵�
private:
	static void func2()
	{
		cout << "static void func2����" << endl;
	}


};

int Person::m_A;

//���ֵķ��ʷ�ʽ
void test01()
{
	//1��ͨ���������
	Person p;
	p.func();

	//2��ͨ����������
	Person::func();

	//������ʲ���˽�о�̬��Ա����Person::func2();
}



int main() {

	test01();


	system("pause");
	return 0;

}