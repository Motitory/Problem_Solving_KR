#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n;
	cin >> n;

	int a[n];
	int d[n];

	for (int i = 0; i < n; i++)
		cin >> a[i];

	for (int i = 0; i < n; i++) {
		d[i] = a[i];
		if (i == 0) continue;
		if (d[i] < d[i - 1] + a[i]) d[i] = d[i - 1] + a[i];
	}

	int ans = d[0];
	for (int i = 0; i < n; i++) {
		if (ans < d[i]) ans = d[i];
	}

	cout << ans << '\n';

	return 0;
}