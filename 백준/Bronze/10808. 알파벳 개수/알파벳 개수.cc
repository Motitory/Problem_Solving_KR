#include <bits/stdc++.h>

using namespace std;

string str;
int alpha[26];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> str;

	for (char c : str)
		alpha[c - 'a']++;

	for (auto i : alpha)
		cout << i << ' ';

	return 0;
}