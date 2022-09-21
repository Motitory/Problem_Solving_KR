#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= (2 * n - i); j++) {
			if (j >= i) cout << "*";
			else cout << " ";
		}
		cout << '\n';
	}

	return 0;
}