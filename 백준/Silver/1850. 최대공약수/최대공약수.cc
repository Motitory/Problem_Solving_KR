#include <iostream>

using namespace std;

long long gcd(long long x, long long y) {
	long long temp, r;

	if (x < y) {
		temp = x;
		x = y;
		y = temp;
	}

	while (y != 0) {
		r = x % y;
		x = y;
		y = r;
	}
	return x;
}

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	long long A, B; 
	cin >> A >> B;

	long long result = gcd(A, B);

	for (long long i = 1; i <= result; i++) {
		cout << 1;
	}

	cout << '\n';
	return 0;
}