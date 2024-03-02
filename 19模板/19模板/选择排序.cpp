#include <iostream>
using namespace std;

const int MAXN = 1001;


int main() {

	int n, i, j,k;
	float a[MAXN],temp;
	cin >> n;
	for (i = 0; i < n;i++)
		cin >> a[i];

	for (i = 0;i < n;i++)//i用来控制当前序列中最小值存放的数据位置
	{
		k = i;
		for (j = i + 1;j < n;j++)
		{
			if (a[j] < a[k])
				k = j;
		}
		if (k != i)
		{
			//temp = a[i];a[i] = a[k];a[k] = temp;
			//swap(a[i], a[k]);
		}
	}

	for (i = 0;i < n;i++)
		cout << a[i] << "";


	system("pause");
	return 0;
}