#include <iostream>
using namespace std;
int main07_1() {

	//continue���

	for (int i = 0; i < 100;i++)
	{
		//�����������������岻���
		if ( i % 2 == 0)// 0 2 4 6 8
		{
			continue;//����ɸѡ������ִ�е��˾Ͳ�������ִ�У�ִ����һ��ѭ��
			//break���˳�ѭ������continue����
		}
		cout << i << endl;
	}




	system("pause");
	return 0;
}