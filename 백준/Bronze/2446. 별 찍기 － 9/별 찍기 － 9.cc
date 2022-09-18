#include <iostream>

using namespace std;

int main (int argc, char* argn[]) {
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (j > i - 1) cout << "*";
			else cout << " ";
		}
		
		for (int j = 1; j <= N - i; j++) {
			cout << "*";
		}
		cout << "\n";
	}

	for (int i = 1; i <= N - 1; i++) {
		for (int j = 1; j <= N; j++) {
			if (j >= N - i) cout << "*";
			else cout << " ";
		}
		
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}
