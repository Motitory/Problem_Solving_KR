#include <iostream>

using namespace std;

int main (int argc, char* argn[]) {
	int N;
	cin >> N;

	int i, j;
	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++) {
			if (j >= i) cout << "*";
			else cout << " ";
		}
		cout << "\n";
	}

	return 0;
}