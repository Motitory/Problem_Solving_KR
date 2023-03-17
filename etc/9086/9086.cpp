#include <bits/stdc++.h>

using namespace std;

int t;
string str;

int main(int argc, char **argv) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> t;
	while (t--) {
		cin >> str;
		cout << str[0] << str[str.length() - 1] << '\n';
	}

	return 0;
}