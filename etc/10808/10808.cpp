#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int freq[26];
	fill(freq, freq + 26, 0);

	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++)
		freq[s[i] - 'a']++;

	for (int i = 0; i < 26; i++)
		cout << freq[i] << " ";

	return 0;
}