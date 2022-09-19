#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, k, r;
	
	while (true) {
		cin >> n;
		if (n == 0) break;

		k = 0;
		r = n;
		while (r != 0) {
			k = k * 10 + r % 10;
			r /= 10;
		}

		if (k == n) {
			cout << "yes" << "\n";
		} else {
			cout << "no" << "\n";
		}
	}

	return 0;
}