#include <iostream>

using namespace std;

int cal_gcd(int x, int y) {
	int r = 1;
	while (r != 0) {
		r = x % y;
		x = y;
		y = r;
	}

	return x;
}

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int A, B, C, D;
	cin >> A >> B;
	cin >> C >> D;

	int e = A * D + B * C;
	int f = B * D;

	int g = cal_gcd(e, f);

	cout << e / g << " " <<  f / g << '\n';

	return 0;	
}