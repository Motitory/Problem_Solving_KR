#include <bits/stdc++.h>

using namespace std;

string str, ans;
char alpha[26];
bool check = true;
int idx;
stack<char> stk;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> str;

	for (char c : str)
		alpha[c - 'A']++;

	for (int i = 0; i < 26; i++) {
		if (alpha[i] % 2 == 1) {
			if (!check || (str.length() % 2 == 0)) {
				cout << "I'm Sorry Hansoo" << '\n';
				return 0;
			}
			check = false;
			idx = i;
		}
	}

	if (str.length() % 2 && check) {
		cout << "I'm Sorry Hansoo" << '\n';
		return 0;	
	}

	for (int i = 0; i < 26; i++) {
		while (alpha[i] > 1) {
			stk.push(i + 'A');
			cout << (char)(i + 'A');
			alpha[i] -= 2;
		}
	}

	if (!check) cout << (char)(idx + 'A');

	while (!stk.empty()) {
		cout << stk.top();
		stk.pop();
	}

	return 0;
}