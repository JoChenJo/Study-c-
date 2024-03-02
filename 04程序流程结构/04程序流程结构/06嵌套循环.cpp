#include <iostream>
using namespace std;
int main06() {

	//利用嵌套实现星图

	//打印一行星图

	//外层循环
	for (int i = 0; i < 10; i++)
	{
		//内层循环
		for (int i = 0; i < 10; i++)
		{
			cout << " *" ;
		}
		cout << endl;
	}

	



	system("pause");
	return 0;
}