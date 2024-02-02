#include <iostream>

using namespace std;

long long d[201];
const long long mod = 1000000000;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, m;
	cin >> n >> m;
	d[0] = 1;
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			d[j] += d[j - 1];
			d[j] %= mod;
		}
	}

	cout << d[n] << '\n';

	return 0;	
}