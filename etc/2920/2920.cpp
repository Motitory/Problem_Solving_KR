#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int arr[9], i;

	for (i = 1; i <= 8; i++) {
		cin >> arr[i];
	}

	if (arr[1] == 8) {
		for (i = 2; i <= 8; i++) {
			if (arr[i] != (8 - i + 1)) {
				cout << "mixed" << '\n';
				break;
			}
		}
		if (i == 9) cout << "descending" << '\n';
	} else if (arr[1] == 1) {
		for (i = 2; i <= 8; i++) {
			if (arr[i] != i) {
				cout << "mixed" << '\n';
				break;
			}
		}
		if (i == 9) cout << "ascending" << '\n';
	} else cout << "mixed" << '\n';

	return 0;
}