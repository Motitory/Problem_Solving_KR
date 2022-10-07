#include <iostream>

using namespace std;

int arr[10];

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;

	while (N != 0) {
		arr[N % 10]++;
		N /= 10;
	}

	arr[6] = (arr[6] + arr[9] + 1) / 2;
	arr[9] = 0;

	int max = 0;
	for (int i = 0; i < 9; i++) {
		if (arr[i] > max)
			max = arr[i];
	}

	cout << max << '\n';

	return 0;
}