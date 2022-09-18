#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	int N;
	cin >> N;

	for (int i = 1; i <= N - 1; i++) {
		for (int j = 1; j <= N - i; j++) {
			cout << " ";
		}
		for (int j = 1; j <= 2 * i - 1; j++) {
			if ((j == 1) || (j == 2 * i - 1)) cout << "*";
			else cout << " ";
		}
		cout << "\n";
	}

	for (int i = 1; i <= 2 * N - 1; i++) {
		cout << "*";
	}
	cout << endl;

	return 0;
}