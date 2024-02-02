#include <iostream>
#include <algorithm>

using namespace std;

void pita(int x, int y, int z) {
	if (z * z == x * x + y * y)	cout << "right" << '\n';
	else cout << "wrong" << '\n';
}

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int arr[3];

	while (true) {
		for (int i = 0; i < 3; i++) {
			cin >> arr[i];
		}

		if (arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == 0) break;

		sort(arr, arr + 3);

		pita(arr[0], arr[1], arr[2]);
	}

	return 0;
}