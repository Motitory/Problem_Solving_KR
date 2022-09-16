#include <iostream>

using namespace std;

int main (int argc, char* argn[]) {
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (j >= N - i + 1) cout << "*";
			else cout << " ";
		}
		cout << "\n";
	}

	for (int i = 1; i <= N - 1; i++) {
		for (int j = 1; j <= N; j++) {
			if (j > i) cout << "*";
			else cout << " ";
		}
		cout << "\n";
	}

	return 0;
}