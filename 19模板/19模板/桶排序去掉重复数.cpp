#include <iostream>
using namespace std;

const int MAXN = 1001;


int main() {

	int a[MAXN], n, i, j, k,m=0;
	memset(a, 0, sizeof(a));
	cin >> n;

	for (i = 1;i <= n;i++)
	{
		cin >> k;
		if (a[k] == 0) m++;
		a[k]++;
	}
	cout << m << endl;
	for (i = 0;i < MAXN;i++)
		if (a[i] > 0)
		{
			cout << i << "";
		}
	cout << endl;


	system("pause");
	return 0;
}