#include <bits/stdc++.h>

using namespace std;

int n, cnt;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		stack<int> stk;
		string str;
		cin >> str;
		for (int j = 0; j < str.length(); j++) {
			if (stk.empty() || stk.top() != str[j]) {
				stk.push(str[j]);
			} else if (stk.top() == str[j]) {
				stk.pop();
			}
		}
		if (stk.empty()) cnt += 1;
	}

	cout << cnt << '\n';

	return 0;
}