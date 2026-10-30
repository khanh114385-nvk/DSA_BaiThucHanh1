#include <iostream>
#include <math.h>
using namespace std;
void ptb1(int b, int c) {
	if (b == 0) {
		if (c == 0) {
			cout << "VSN";
		}
		else cout << "VN";
	}
	else {
		float x = -c / b;
	}
}
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a == 0) {
		ptb1(b, c);
	}
	else {
		float delta = b * b - 4 * a * c;
		if (delta > 0) {
			float x1 = (-b - sqrt(delta) )/ (2 * a);
			float x2 = (-b + sqrt(delta) )/ (2 * a);
			cout << "x1= " << x1 << endl << "x2= " << x2;
		}
		else if (delta == 0) {
			cout << "x1 =  " << float(-b / 2*a);
		}
		else cout << "VN";
  }
}
