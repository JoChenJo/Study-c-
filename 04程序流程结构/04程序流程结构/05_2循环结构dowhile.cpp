#include <iostream>
using namespace std;
//do...while 语句

	//在屏幕输出0~9这10个数字
int main05_2() {

	int num = 0;

	/*do
	{
		cout << num << endl;
		num++;
	}
	while (num < 10);*/

	//do...while和while循环区别在于do...while会先执行一次循环语句

	while (num)
	{
		cout << num << endl;
		num++;
	}




	system("pause");
	return 0;
}