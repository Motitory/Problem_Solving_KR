#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	// 1 - 1, 1, 1, 1
	// 2 - 2, 4, 8, 6
	// 3 - 3, 9, 7, 1
	// 4 - 4, 6, 4, 6
	// 5 - 5, 5, 5, 5
	// 6 - 6, 6, 6, 6
	// 7 - 7, 9, 3, 1
	// 8 - 8, 4, 2, 6
	// 9 - 9, 1, 9, 1

	// 최소 4번안에 반복

	int T, a, b;
	cin >> T;

	while (T--) {
		cin >> a >> b;
		b = !(b % 4) ? 4 : (b % 4);
		
		int units = 1;
		while (b--) {
			units = (units * a) % 10;
		}
		if (units == 0) {
			units = 10;
		}

		cout << units << '\n';
	}

	return 0;
}