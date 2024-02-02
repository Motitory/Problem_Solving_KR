#include <iostream>

using namespace std;

int arr[5];

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	for (int i = 0; i < 5; i++)
		cin >> arr[i];

	int result;

	for (int i = 2; i <= 1000000; i++) {
		int cnt = 0;
		for (int j = 0; j < 5; j++) {
			if (i % arr[j] == 0)
				cnt++;
		}
		if (cnt >= 3) {
			result = i;
			break;
		}
	}

	cout << result << '\n';

	return 0;
}