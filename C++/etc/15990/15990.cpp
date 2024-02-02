#include <iostream>

using namespace std;
// d[i][j] => j가 마지막에 나온 숫자, i는 숫자들의 총합이라고 생각하고 선언
long long d[100001][4];
const long long MOD = 1000000009LL;
const int limit = 100000;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	for (int i = 1; i <= limit; i++) {
		// 맨 뒤가 1일때
		if (i - 1 >= 0) {
			// 바로 앞 자리는 2 또는 3이 올 수 음
			d[i][1] = d[i - 1][2] + d[i - 1][3];
			if (i == 1)
				d[i][1] = 1;
		}
		// 맨 뒤가 2일때
		if (i - 2 >= 0) {
			// 바로 앞 자리는 1 또는 3이 올 수 음
			d[i][2] = d[i - 2][1] + d[i - 2][3];
			if (i == 2)
				d[i][2] = 1;
		}
		// 맨 뒤가 3일때
		if (i - 3 >= 0) {
			// 바로 앞 자리는 1 또는 2이 올 수 음
			d[i][3] = d[i - 3][1] + d[i - 3][2];
			if (i == 3)
				d[i][3] = 1;
		}
		d[i][1] %= MOD;
		d[i][2] %= MOD;
		d[i][3] %= MOD;
	}

	int T;
	cin >> T;
	while (T--)	{
		int n;
		cin >> n;
		cout << (d[n][1] + d[n][2] + d[n][3]) % MOD << '\n';
	}
	
	return 0;
}