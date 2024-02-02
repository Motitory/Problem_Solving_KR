#include <iostream>

using namespace std;

long long d[1001][10];
long long mod = 10007;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i <= 9; i++)
		d[1][i] = 1;
	
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			for (int k = 0; k <= j; k++) {
				d[i][j] += d[i - 1][k];
				d[i][j] %= mod;
			}
		}
	}
	
	long long ans = 0;
	for (int i = 0; i <= 9; i++)
		ans += d[n][i];
	ans %= mod;

	cout << ans << '\n';

	return 0;
}