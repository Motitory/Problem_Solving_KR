#include <iostream>
#include <algorithm>

using namespace std;

int a[100001][2];
// 2 * i 에서 얻을 수 있는 최대 점수, i번 열에서 0은 뜯지 않음, 1은 위쪽 2는쪽아래쪽
int d[100001][3];

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 1; i <= n; i++)
			cin >> a[i][0];
		for (int i = 1; i <= n; i++)
			cin >> a[i][1];

		d[0][0] = d[0][1] = d[0][2] = 0;
		for (int i = 1; i <= n; i++) {
			d[i][0] = max({d[i - 1][0], d[i - 1][1], d[i - 1][2]});
			d[i][1] = max(d[i - 1][0], d[i - 1][2]) + a[i][0];
			d[i][2] = max(d[i - 1][0], d[i - 1][1]) + a[i][1];
		}

		long long ans = max({d[n][0], d[n][1], d[n][2]});
		cout << ans << '\n';
	}

	return 0;	
}