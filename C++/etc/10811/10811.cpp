#include <bits/stdc++.h>

using namespace std;

int temp, n, m, a, b;

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	int arr[n + 1];
	for (int i = 0; i <= n; i++)
		arr[i] = i;

	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		for (int j = 0; j <= (b - a) / 2; j++) {
			temp = arr[a + j];
			arr[a + j] = arr[b - j];
			arr[b - j] = temp;
		}
	}

	for (int i = 1; i <= n; i++)
		cout << arr[i] << ' ';

	return 0;
}