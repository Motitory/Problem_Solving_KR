#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int arr[5], sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		sum += arr[i];
	}

	sort(arr, arr + 5);
	int mid = arr[2];

	cout << sum / 5 << '\n';
	cout << mid << '\n';

	return 0;
}