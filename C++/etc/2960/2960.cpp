#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, K, count = 0;
	cin >> N >> K;

	vector<int> v(N + 1, 1);
	v[0] = 0; v[1] = 0;

	for (int i = 2; i <= N; i++) {
		if (v[i] == 1) {
			// 소수인 수도 지운다고 함.
			count++;
			if (count == K) {
					cout << i << '\n';
					return 0;
			}
			for (int j = i * i; j <= N; j += i) {
				if (!(v[j] == 0)) {
					v[j] = 0;
					count++;
					if (count == K) {
						cout << j << '\n';
						return 0;
					}
				}
			}
		}
	}

}