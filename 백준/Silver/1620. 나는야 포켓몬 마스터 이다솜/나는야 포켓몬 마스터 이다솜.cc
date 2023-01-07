#include <bits/stdc++.h>

using namespace std;

string str;
map<int, string> m1;
map<string, int> m2;

int n, m;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> str;
		m1[i + 1] = str;
		m2[str] = i + 1;
	}

	while (m--) {
		cin >> str;
		// input's type is int
		if (atoi(str.c_str()))
			cout << m1[atoi(str.c_str())] << '\n';
		else
			cout << m2[str] << '\n';
	}

	return 0;
}