#include <iostream>

using namespace std;

long long d[201][201];
long long mod = 1000000000;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, k;
	cin >> n >> k;
	d[0][0] = 1LL;
	// d[k][n] = d[k - 1][n] + d[k][n - 1];
	for (int i = 1; i <= k; i++) {
		for (int j = 0; j <= n; j++) {
			// d[k - 1][n]
			d[i][j] = d[i - 1][j];
			// d[k][n - 1]
			if (j - 1 >= 0)
				d[i][j] += d[i][j - 1];
			d[i][j] %= mod;
		}
	}

	cout << d[k][n] << '\n';

	return 0;
}