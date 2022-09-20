#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int M, N;
	cin >> M >> N;

	vector<int> v(N + 1, 1);
	v[1] = 0;

	for (int i = 2; i <= sqrt(N); i++) {
		if (v[i] == 1) {
			for (int j = i * i; j <= N; j += i) {
				v[j] = 0;
			}
		}
	}

	for (int i = M; i <= N; i++) {
		if (v[i] == 1) {
			cout << i << '\n';
		}
	}

	return 0;
}