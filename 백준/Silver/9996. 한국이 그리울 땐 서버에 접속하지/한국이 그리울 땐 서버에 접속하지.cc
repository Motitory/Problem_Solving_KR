#include <bits/stdc++.h>

using namespace std;

int t, idx;
string front, back, temp, pattern;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> t;
	cin >> pattern;
	idx = pattern.find('*');
	front = pattern.substr(0, idx);
	back = pattern.substr(idx + 1);

	while (t--) {
		cin >> temp;
		if (front.size() + back.size() > temp.size())
			cout << "NE" << '\n';
		else {
			if (temp.substr(0, front.size()) == front && temp.substr(temp.size() - back.size()) == back)
				cout << "DA" << '\n';
			else cout << "NE" << '\n';
		}
	}

	return 0;
}