#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		if (i % 2 == 1) {
			for (int j = 1; j <= 2 * N - 1; j++) {
				if (j % 2 == 1) cout << "*";
				else cout << " ";
			}
		} else {
			for (int j = 1; j <= 2 * N; j++) {
				if (j % 2 == 1) cout << " ";
				else cout << "*";
			}
		}
		cout << '\n';
	}

	return 0;
}
