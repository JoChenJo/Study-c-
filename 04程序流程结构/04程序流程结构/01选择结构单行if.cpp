#include <iostream>
using namespace std;
int main01() {

	//ѡ��ṹ ����if���
	//�û��������飬�����������600����Ϊ����һ����ѧ������Ļ�����
	
	//1���û��������
	int score = 0;
	cout << "������һ������" << endl;
	cin >> score;

	//2����ӡ�û��������
	cout << "������ķ���Ϊ��" << score << endl;

	//3���жϷ����Ƿ����600��������ڣ���ô���
	if (score > 600) {
		cout << " ��ϲ��������һ����ѧ " << endl;
	}



	system("pause");
	return 0;
}