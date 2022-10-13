#include <iostream>

using namespace std;

const long long MOD = 1000000000;
const int MAX = 100;
// 뒷자리는 맨 마지막 숫자, 앞자리는 계단수 자리
long long d[MAX + 1][10];

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 1; i <= 9; i++)
		d[1][i] = 1;

	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			d[i][j] = 0;
			if (j - 1 >= 0) d[i][j] += d[i - 1][j - 1];
			if (j + 1 <= 9) d[i][j] += d[i - 1][j + 1];
			d[i][j] %= MOD;
		}
	}

	long long ans = 0;
	for (int i = 0; i <= 9; i++) ans += d[n][i];
	ans %= MOD;

	cout << ans << '\n';

	return 0;
}