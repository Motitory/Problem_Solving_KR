#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, K, num, cnt = 0;
	cin >> N >> K;

	vector<int> v;

	for (int i = 1; i <= N; i++) {
		cin >> num;
		v.push_back(num);
	}

	for (int i = N; i >= 1; i--) {
		if (v[i - 1] <= K) {
			cnt += K / v[i - 1];
			K %= v[i - 1];
		}
		if (K == 0) break;
	}

	cout << cnt << '\n';

	return 0;
}