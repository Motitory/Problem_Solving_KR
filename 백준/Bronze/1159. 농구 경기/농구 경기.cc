#include <bits/stdc++.h>

using namespace std;

int t, a[26];
string ans, temp;

int main() {
	cin >> t;
	while (t--) {
		cin >> temp;
		a[temp[0] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		if (a[i] >= 5) ans += i + 'a';
	}

	if (ans == "") ans = "PREDAJA";

	cout << ans << '\n';
	return 0;
}