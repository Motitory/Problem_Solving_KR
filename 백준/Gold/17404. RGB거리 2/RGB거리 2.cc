#include <iostream>
#include <algorithm>

using namespace std;

int a[1001][3];
int d[1001][3];

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
		for (int j = 0; j < 3; j++)
			cin >> a[i][j];

	int ans = 1000 * 1000 + 1;

	for (int k = 0; k <= 2; k++) {	// 첫번째 집 색 고정
		for (int j = 0; j <= 2; j++) {
			// 첫번째 집 고정시키기
			if (k == j)
				d[1][j] = a[1][j];
			else
				d[1][j] = 1000 * 1000 + 1;
		}
		// 두번째부터 마지막까지 집 색칠 비용 최소
		for (int i = 2; i <= n; i++) {
			d[i][0] = min(d[i - 1][1], d[i - 1][2]) + a[i][0];
			d[i][1] = min(d[i - 1][0], d[i - 1][2]) + a[i][1];
			d[i][2] = min(d[i - 1][0], d[i - 1][1]) + a[i][2];	
		}
		// 마지막 집 생각하기
		for (int j = 0; j <= 2; j++) {
			// 마지막 집과 첫번째 집 색이 같다면 무시.
			if (j == k) continue;
			ans = min(ans, d[n][j]);
		}
	}

	cout << ans << '\n';

	return 0;		
}