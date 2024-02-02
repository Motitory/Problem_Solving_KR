#include <bits/stdc++.h>

using namespace std;

string str, ans;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	getline(cin, str);

	for (char c : str) {
		if (c >= 'a' && c <= 'z') {
			if (c + 13 > 'z')
				ans += c + 13 - 26;
			else ans += c + 13;
		} else if (c >= 'A' && c <= 'Z') {
			if (c + 13 > 'Z')
				ans += c + 13 - 26;
			else ans += c + 13;
		} else ans += c;
	}

	cout << ans << '\n';

	return 0;
}
