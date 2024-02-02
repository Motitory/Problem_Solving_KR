#include <iostream>

using namespace std;

int d[100001][3];
int mod = 9901;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n;
	cin >> n;

	// 세로로 줄 수, 가로로 사자 배치 가능
	// 0은 왼쪽, 오른쪽 둘다 없음, 1은 왼쪽, 2는 오른쪽으로 가정
	d[0][0] = 1;
	for (int i = 1; i <= n; i++) {
		d[i][0] = d[i - 1][0] + d[i - 1][1] + d[i - 1][2];
		d[i][1] = d[i - 1][0] + d[i - 1][2];
		d[i][2] = d[i - 1][0] + d[i - 1][1];
		for (int j = 0; j <= 2; j++)
			d[i][j] %= mod;
	}

	cout << (d[n][0] + d[n][1] + d[n][2]) % mod << '\n';

	return 0;
}