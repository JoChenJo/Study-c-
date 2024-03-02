#include <iostream>
using namespace std;
int main00_1() {

	//敲桌子案例

	//1、先输出1~100数字
	for (int i = 1; i <= 100; i++)
	{
		//cout << i << endl;
		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7 )//如果是特殊数字，打印敲桌子
		{
			cout << "敲桌子" << endl;
		}
		else//如果不是特殊数字，才打印数字
		{
			cout << i << endl;
		}
	}

	//2、从100个数字中找到特殊数字，打印“敲桌子”
	//如果是7的倍数、个位有7或十位有7，打印“敲桌子”
	
	



	system("pause");
	return 0;
}