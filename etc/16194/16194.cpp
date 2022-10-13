#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int N;
	cin >> N;

	vector<int> a(N + 1);
	for (int i = 1; i <= N; i++)
		cin >> a[i];

	vector<int> d(N + 1);
	for (int i = 1; i <= N; i++)
		d[i] = 1000 * 10000;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			d[i] = min(d[i], a[j] + d[i - j]);
		}
	}

	cout << d[N] << '\n';

	return 0;
}