#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	int N, X;
	int max = -1000001, min = 1000001;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> X;
		if (X > max) {
			max = X;
		}
		if (X < min) {
			min = X;
		}
	}

	cout << min << " " << max << "\n";

	return 0;
}