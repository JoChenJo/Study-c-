#include <iostream>;
using namespace std;
//常量的定义方式
//1、#define 宏常量
//2、const修饰的变量

//1、#define 宏常量
#define Week 7

int main04() {

	//Week = 14;//错误，Week是常量，一旦修改就会报错
	cout << "一周总共有：" << Week << " 天 " << endl;

	//2、const修饰的变量
	const int month = 12;
	//month = 24;//错误，const修饰的变量也称为常量
	cout << "一年总共有：" << month << "个月" << endl;

	system("pause");
	return 0;
}