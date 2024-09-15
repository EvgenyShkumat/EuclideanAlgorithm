#include <iostream>
using namespace std;

int gcd(unsigned int, unsigned int);

int main() {
	cout << gcd(12, 12);

	return 0;
}

int gcd(unsigned int a, unsigned int b) {
	while (a && b) {
		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}

	return a > b ? a : b;
}