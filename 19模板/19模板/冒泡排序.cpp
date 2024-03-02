#include <iostream>
using namespace std;

const int MAXN = 1001;


int main() {
	int n, i, j;
	float a[MAXN];
	cin >> n;
	for (i = 0; i < n;i++)
		cin >> a[i];
	for(int i = 0; i < n;i++)
		for (int j > 0;j < n - i - 1;j--)
		{
			if (a[j] > a[j + 1])
				swap(a[j], a[j + 1]);
		}
	for (i = 0;i < n;i++)
		cout << a[i] << "";



	system("pause");
	return 0;
}