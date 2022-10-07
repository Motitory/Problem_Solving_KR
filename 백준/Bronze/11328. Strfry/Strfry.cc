#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;

	while (N--) {
		int alphabet1[26] = {};
		int alphabet2[26] = {};
		string str1;
		cin >> str1;
		for (int i = 0; i < str1.length(); i++)
			alphabet1[str1[i] - 'a']++;
		
		string str2;
		cin >> str2;
		for (int i = 0; i < str2.length(); i++)
			alphabet2[str2[i] - 'a']++;

		string result = "Possible";

		for (int i = 0; i < 26; i++) {
			if (alphabet1[i] != alphabet2[i]) {
				result = "Impossible";
				break;
			}
		}

		cout << result << "\n";
	}

	return 0;
}