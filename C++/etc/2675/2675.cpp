#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T;
	cin >> T;

	int R;
	string S;
	for (int i = 1; i <= T; i++) {
		cin >> R >> S;

		for (int j = 1; j <= S.length(); j++) {
			for (int k = 1; k <= R; k++) {
				cout << S[j - 1];
			}
		}
		cout << '\n';
	}

	return 0;
	
}