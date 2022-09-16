#include <iostream>

using namespace std;

int main (int argc, char* argn[]) {
	int N;
	cin >> N;

	int i, j;
	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++) {
			if (j <= i) cout << "*";
			else cout << " ";
		}
		for (j = 1; j <= N; j++) {
			if (j >= N - i + 1) cout << "*";
			else cout << " ";
		}
		cout << "\n";
	}

	for (i = 1; i <= N - 1; i++) {
		for (j = 1; j <= N; j++) {
			if (j <= N - i) cout << "*";
			else cout << " ";
		}
		for (j = 1; j <= N; j++) {
			if (j > i) cout << "*";
			else cout << " ";
		}
		cout << "\n";
	}

	return 0;
}