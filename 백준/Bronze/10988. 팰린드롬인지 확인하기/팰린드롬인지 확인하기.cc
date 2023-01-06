#include <bits/stdc++.h>

using namespace std;

string str;
stack<char> stk;
int ans = 1;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> str;

	for (int i = 0; i < (str.length() + 1) / 2; i++) {
		stk.push(str[i]);
	}

	for (int i = str.length() / 2; i < str.length(); i++) {
		if (stk.top() == str[i]) stk.pop();
		else {
			ans = 0;
			break;
		}
	}

	cout << ans << '\n';

	return 0;
}