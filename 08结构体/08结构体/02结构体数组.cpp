#include <iostream>
using namespace std;
#include<string>

//结构体数组
//1、定义结构体
struct Student
{
	//姓名
	string name;
	//年龄
	int age;
	//分数
	int score;
};


int main02() {

	//2、创建结构体组数
	struct Student stdArray[3] =
	{
		{" 张三" , 18 , 100 },
		{" 李四" , 28 , 99 },
		{" 王五" , 38 , 66 }
	};

    //3、给结构体数组中的元素赋值
	stdArray[2].name = "赵六";
	stdArray[2].age = 80;
	stdArray[2].score = 60;

    //4、便利结构体数组
	for (int i = 0;i < 3;i++)
	{
		cout << " 姓名：" << stdArray[i].name
			<< " 年龄：" << stdArray[i].age
			<< " 分数：" << stdArray[i].score << endl;
	}




	system("pause");
	return 0;
}