#include <bits/stdc++.h>

using namespace std;

int n, t;
string a, b;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	while (n--) {
		cin >> t;
		map<string, int> m;
		while (t--) {
			cin >> a >> b;
			m[b]++;
		}
		long long ret = 1;
		for (auto c : m)
			ret *= ((long long) c.second + 1);
		ret -= 1;
		cout << ret << '\n';
	}
	return 0;
}