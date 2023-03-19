#include <bits/stdc++.h>

using namespace std;

int c, n;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> c;
	while (c--) {
		cin >> n;
		int arr[n];
		double sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			sum += arr[i];
		}
		double avg = sum / n;
		double count = 0;
		for (int i = 0; i < n; i++) {
			if (arr[i] > avg) count++;
		}
		cout << fixed; cout.precision(3);
		cout << count / n * 100 << "%" << '\n';
	}

	return 0;
}