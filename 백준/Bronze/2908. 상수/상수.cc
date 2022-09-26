#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int A, B;
	cin >> A >> B;

	int pal_A = 0, pal_B = 0;

	while (A != 0) {
		pal_A = pal_A * 10 + A % 10;
		A /= 10;
	}

	while (B != 0) {
		pal_B = pal_B * 10 + B % 10;
		B /= 10;
	}

	if (pal_A > pal_B) cout << pal_A << '\n';
	else cout << pal_B << '\n';
}