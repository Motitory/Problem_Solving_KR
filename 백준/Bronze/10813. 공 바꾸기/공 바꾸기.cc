#include <bits/stdc++.h>

using namespace std;

int n, m, temp, a, b;

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	int arr[n + 1];

	for (int i = 0; i < n + 1; i++)
		arr[i] = i;

	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
	}


	for (int i = 1; i <= n; i++)
		cout << arr[i] << ' ';

	return 0;
}