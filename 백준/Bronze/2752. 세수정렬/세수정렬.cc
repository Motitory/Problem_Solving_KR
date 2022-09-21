#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int arr[4], temp;

	for (int i = 1; i <= 3; i++) {
		cin >> arr[i];
	}

	for (int i = 1; i <= 2; i++) {
		for (int j = i + 1; j <= 3; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 1; i <= 3; i++) {
		cout << arr[i] << ' ';
	}

	return 0;
}