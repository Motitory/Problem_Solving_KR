#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int arr[10];
	int max = 0; int idx = 0;

	for (int i = 1; i <= 9; i++) {
		cin >> arr[i];
		if (arr[i] > max) {
			max = arr[i];
			idx = i;
		}
	}

	cout << max << '\n';
	cout << idx << '\n';

	return 0;
}