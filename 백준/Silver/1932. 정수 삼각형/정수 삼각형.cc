#include <iostream>

using namespace std;

int a[500][500];
// i행 j열이 선택되었을 때 최대 합
int d[500][500];

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j <= i; j++)
			cin >> a[i][j];
	
	d[0][0] = a[0][0];
	for (int i = 1; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			// 오른쪽 대각선으로 내려온 값
			d[i][j] = d[i - 1][j] + a[i][j];
			// 왼쪽 대각선으로 내려온 값이 더 크다면 변경
			if (j - 1 >= 0 && d[i][j] < d[i - 1][j - 1] + a[i][j])
				d[i][j] = d[i - 1][j - 1] + a[i][j];
		}
	}

	// 최대의 d[n][i] 찾기
	int ans = d[n - 1][0];
	for (int i = 0; i < n; i++)
		if (ans < d[n - 1][i]) ans = d[n - 1][i];
	
	cout << ans << '\n';

	return 0;
}