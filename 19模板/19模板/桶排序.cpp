#include <iostream>
using namespace std;

const int MAXN = 11;


int main() {

	int a[MAXN], n, i, j, k;
	memset(a, 0, sizeof(a));
	cin >> n;

	for (i = 1;i <= n;i++)
	{
		cin >> k;
		a[k]++;
	}
	for(i=0;i<MAXN;i++)
		while (a[i] > 0)
		{
			cout << i << "";a[i]--;
		}
	cout << endl;


	system("pause");
	return 0;
}