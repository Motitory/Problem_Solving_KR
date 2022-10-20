#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int t;
	cin >> t;

	while (t--)	 {
		int m, n, x, y;
		cin >> m >> n >> x >> y;

		x -= 1;
		y -= 1;

		bool ok = false;

		for (int i = x; i < (m * n); i += m) {
			if (i % n == y) {
				cout << i + 1 << '\n';
				ok = true;
				break;
			}
		}
		if (!ok) cout << -1 << '\n';
	}
	return 0;
}