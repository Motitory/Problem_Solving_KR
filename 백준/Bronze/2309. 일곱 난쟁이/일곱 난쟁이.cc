#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int arr[9], sum = 0;

	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		sum += arr[i];
	}

	bool finish = false;
	int result[7];

	for (int i = 0; i < 8 && !finish; i++) {
		for (int j = i + 1; j < 9 && !finish; j++) {
			if (arr[i] + arr[j] == (sum - 100)) {
				int cnt = 0;
				for (int k = 0; k < 9; k++) {
					if (k != i && k != j) {
						result[cnt++] = arr[k];
					}
				}
				finish = true;
			}
		}
	}

	sort(result, result + 7);

	for (int i = 0; i < 7; i++)
		cout << result[i] << '\n';

	return 0;
}