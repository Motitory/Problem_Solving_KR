#include <bits/stdc++.h>

using namespace std;

int n, m, t, cnt;
vector<int> v;

int main() {
	cin >> n;
	cin >> m;

	for (int i = 0; i < n; i++) {
		cin >> t;
		v.push_back(t);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		if (v[i] > m) break;
		for (int j = i + 1; j < n; j++) {
			if (v[i] + v[j] > m) break;
			if (v[i] + v[j] == m) cnt++;
		}
	}

	cout << cnt << '\n';

	return 0;
}