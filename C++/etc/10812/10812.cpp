#include <bits/stdc++.h>

using namespace std;

int arr[104], temp[104], n, m, i, j, k;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		arr[i] = i;

	for (int a = 0; a < m; a++) {
		cin >> i >> j >> k;
		for (int b = 1; b < i; b++) {
			temp[b] = arr[b];
		}
		for (int b = i; b < k; b++) {
			temp[b + (j - k + 1)] = arr[b];
		}
		for (int b = k; b <= j; b++) {
			temp[i + b - k] = arr[b];
		}
		for (int b = j + 1; b <= n; b++) {
			temp[b] = arr[b];
		}
		for (int b = 1; b <= n; b++) {
			arr[b] = temp[b];
		}
	}

	for (int a = 1; a <= n; a++) {
		cout << arr[a] << ' ';
	}

	return 0;
}