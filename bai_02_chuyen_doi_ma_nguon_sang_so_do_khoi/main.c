#include <iostream>
#include<math.h>
using namespace std;
bool SoNto(int n) {
	if (n < 2) return false;
	if (n == 2) return true;
	if (n % 2 == 0) return false;
	for (int i = 3; i <= sqrt(n) ; i += 2) {
		if (n % i == 0) return false;
	}
	return true;
}
int main() {
	int n;
	cin >> n;
	if (SoNto(n)) cout << "la so nguyen to";
	else cout << "khong la so nguyen to";
}
