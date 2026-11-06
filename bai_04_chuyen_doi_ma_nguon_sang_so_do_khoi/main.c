#include <iostream>
using namespace std;
long long bcnn(int a, int b) {
	int z = a * b;
	while (a * b != 0) {
		if (a > b) a %= b;
		else b %= a;
	}
	int bcnn = z / (a + b);
	return bcnn;
}
int main() {
	int a, b;
	cin >> a >> b;
	cout << bcnn(a, b);
}
