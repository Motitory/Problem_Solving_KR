#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;

	int arr[N + 1];

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}

	for (int i = 1; i <= N - 1; i++) {
		for (int j = i + 1; j <= N; j++) {
			if (arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 1; i <= N; i++) {
		cout << arr[i] << '\n';
	}

	return 0;
}