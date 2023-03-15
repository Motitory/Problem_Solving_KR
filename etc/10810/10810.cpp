#include <bits/stdc++.h>

using namespace std;

int n, m, arr[101], a, b, num;

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> num;
		for (int j = a; j <= b; j++) {
			arr[j] = num;
		}
	}

	for (int i = 1; i <= n - 1; i++) {
		cout << arr[i] << ' ';
	}
	cout << arr[n] << '\n';

	return 0;
}