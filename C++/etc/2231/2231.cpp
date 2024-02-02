#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, sum, element;
	cin >> N;

	for (int i = 1; i < N; i++) {
		sum = i;
		element = i;

		while (element != 0) {
			sum += element % 10;
			element /= 10;
		}

		if (sum == N) {
			cout << i << '\n';
			return 0;
		}
	}

	cout << 0 << '\n';

	return 0;
}