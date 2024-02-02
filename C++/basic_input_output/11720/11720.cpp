#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int N, total = 0;
	char c;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> c;
		total += c - 48;
	}

	cout << total << "\n";

	return 0;
}
