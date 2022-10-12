#include <iostream>

using namespace std;

int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];

		long long sum = 0;
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++)
				sum += gcd(arr[i], arr[j]);
		}
		cout << sum << '\n';
	}

	return 0;
}