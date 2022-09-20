#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T;
	cin >> T;

	string str;
	for (int i = 1; i <= T; i++) {
		cin >> str;
		int score = 0;
		int cnt = 0;
		for (int j = 1; j <= str.length(); j++) {
			if (str[j - 1] == 'O') {
				cnt++;
				score += cnt;
			} else cnt = 0;
		}
		cout << score << '\n';
	}
	
	return 0;
}