#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	// i번째 기준으로 왼쪽 오른쪽 나누어 생각.
	vector<int> dl(n);	// i번째를 끝으로 하는 최대 연속 합
	vector<int> dr(n);	// i번째를 시작으로 하는 최대 연속 합

	for (int i = 0; i < n; i++) {
		dl[i] = a[i];
		if (i == 0) continue;
		if (dl[i] < dl[i - 1] + a[i])
			dl[i] = dl[i - 1] + a[i];
	}

	for (int i = n - 1; i >= 0; i--) {
		dr[i] = a[i];
		if (i == n - 1) continue;
		if (dr[i] < dr[i + 1] + a[i])
			dr[i] = dr[i + 1] + a[i];
	}

	// 숫자를 제거하지 않았을 경우
	int ans = dl[0];
	for (int i = 1; i < n; i++)
		if (ans < dl[i]) ans = dl[i];

	// 숫자 하나를 제거했을 경우
	for (int i = 1; i < n - 1; i++)
		if (ans < dl[i - 1] + dr[i + 1])
			ans = dl[i - 1] + dr[i + 1];

	cout << ans << '\n';

	return 0;
}