#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, K, cnt = 0;
	cin >> N >> K;

	for (int i = 1; i <= N; i++) {
		if (N % i == 0) {
			cnt++;
			if (cnt == K) {
				cout << i << '\n';
				return 0;
			}
		}
	}

	cout << "0" << '\n';
	return 0;
}