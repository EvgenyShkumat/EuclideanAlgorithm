#include <iostream>
using namespace std;

int gcd1(unsigned int, unsigned int);
int gcd2(unsigned int, unsigned int);

int main() {
	cout << gcd2(48, 36);

	return 0;
}

int gcd2(unsigned int a, unsigned int b) {
	while (a && b) {
		if (a > b) {
			a %= b;
		}
		else {
			b %= a;
		}
	}

	return a + b;
}


int gcd1(unsigned int a, unsigned int b) {
	while (a && b) {
		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}

	return a;
}