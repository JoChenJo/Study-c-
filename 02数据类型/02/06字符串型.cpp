#include <iostream>
using namespace std;
int main06() {

	//1、C风格字符串
	//注意事项1  char 字符串名[]
	//注意事项2  等号后面要用双引号 包含起来字符串
	char str[] = "hellow world";
	cout << str << endl;

	//2、C++风格字符串
	// 包含一个头文件  #include <string>
	string str1 = "hellow world";
	cout << str1 << endl;

	system("pause");
	return 0;
}