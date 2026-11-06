#include <iostream>
using namespace std;
int main()
{
	int n, a[1001];
	cin >> n;
	for (int i = 0; i <= n - 1; i++) {
		cin >> a[i];
	}
	int max = a[0];
	for (int i = 1; i < n; i++) {
		if (max < a[i]) max = a[i];
	}
	cout << max;
}
