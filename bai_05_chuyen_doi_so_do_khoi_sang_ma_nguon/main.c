#include <iostream>
#include <math.h>
using namespace std;
bool isPrime(int n){
	if (n < 2) return false;
	else{
		for (int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) return false;
		}
		return true;
	}
}
int main() {
	int n;
	cin >> n;
	if (isPrime(n)) cout << "la so nguyen to";
	else cout << "khong phai so nguyen to";
}
