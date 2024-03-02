#include <iostream>
using namespace std;

//分别利用普通写法和多态技术实现计算器

//普通写法
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

	int m_Num1;//操作数1
	int m_Num2;//操作数2
};

void test1()
{
	//创建计算器对象
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