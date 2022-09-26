#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int arr[10001] = {};

	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		int temp;
		cin >> temp;
		arr[temp]++;
	}

	for (int i = 1; i <= 10000; i++) {
		if (arr[i]) {
			for (int j = 1; j <= arr[i]; j++) {
				cout << i << '\n';
			}
		}
	}

	return 0;
}