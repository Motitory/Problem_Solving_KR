#include <iostream>
#include <string>

using namespace std;

int alphabet[26];

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string str1, str2;
	cin >> str1;
	cin >> str2;

	for (auto c : str1) alphabet[c - 'a']++;
	for (auto c : str2) alphabet[c - 'a']--;

	int sum = 0;
	for (int i : alphabet) {
		if (i >= 0) sum += i;
		else sum -= i;
	}

	cout << sum << '\n';

	return 0;
}