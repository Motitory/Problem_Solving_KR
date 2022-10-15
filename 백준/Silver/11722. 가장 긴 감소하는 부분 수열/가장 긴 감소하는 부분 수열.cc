#include <iostream>

using namespace std;

int a[1001];
// 가장 긴 감소하는 부분 수열의 길이
int d[1001];

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n;
	cin >> n;

	for (int i = n; i >= 1; i--)
		cin >> a[i];

	for (int i = n; i >= 1; i--) {
		d[i] = 1;
		for (int j = i + 1; j <= n; j++) {
			if (a[j] > a[i] && d[i] < d[j] + 1) d[i] = d[j] + 1;
		}
	}

	int ans = d[1];
	for (int i = 2; i <= n; i++)
		if (ans < d[i]) ans = d[i];

	cout << ans << '\n';

	return 0;
}