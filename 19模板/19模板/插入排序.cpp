#include <iostream>
using namespace std;

const int MAXN = 1001;


int main() {
	int n, i, j,k;
	float a[MAXN], temp;
	cin >> n;
	for (i = 0;i < n;i++)
		cin >> a[i];
	for (i = 1;i < n;i++)
	{
		for (j = i - 1;j >= 0;j--)
			if (a[j] < a[i]) break;
		if (j != i - 1)
		{
			temp = a[i];
			for (k = i - 1;k > j;k--)
				a[k + 1] = a[k];
			a[j + 1] = temp;
		}
	}

	for (i = 0;i < n;i++)
		cout << a[i] << "";




	system("pause");
	return 0;
}