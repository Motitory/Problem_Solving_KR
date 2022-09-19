#include <iostream>

using namespace std;

int gcd(int x, int y) {
	int r;

	while (y) {
		r = x % y;
		x = y;
		y = r;
	}

	return x;
}

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int a, b;
	cin >> a >> b;
	int g, l;

	if (a > b) {
		g = gcd(a, b);
	} else {
		g = gcd(b, a);
	}

	cout << g << "\n";

	l = a * b / g;
	cout << l << "\n";
	
	return 0;
}