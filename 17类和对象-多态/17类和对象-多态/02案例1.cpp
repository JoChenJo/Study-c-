#include <iostream>
using namespace std;

//�ֱ�������ͨд���Ͷ�̬����ʵ�ּ�����

//��ͨд��
class Calculator
{
public:

	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if(oper == "-")
		{
			return m_Num1 - m_Num2;
		}

		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}

		/*else if (oper == "/")
		{
			return m_Num1 / m_Num2;
		}*/

	}

	int m_Num1;//������1
	int m_Num2;//������2
};

void test1()
{
	//��������������
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;

	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
}




int main() {

	test1();




	system("pause");
	return 0;
}