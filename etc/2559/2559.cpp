#include <bits/stdc++.h>

using namespace std;

int a[100001], s[100001];
int n, k, temp;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		s[i] = a[i] + s[i - 1];
	}

	int max = INT_MIN + 1;

	for (int i = n; i >= k; i--) {
		temp = s[i] - s[i - k];
		if (temp > max) max = temp;
	}

	cout << max << '\n';

	return 0;
}