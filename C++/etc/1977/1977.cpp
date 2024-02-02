#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int M, N, sum = 0;
	int min = 10001;
	cin >> M >> N;

	for (int i = 1; i <= 100; i++) {
		if ((i * i >= M) && (i * i <= N)) {
			sum += i * i;
			if (i * i < min) {
				min = i * i;
			}
		}
	}

	if (sum == 0) {
		cout << "-1" << '\n';
	} else {
		cout << sum << '\n' << min << '\n';
	}
	
	return 0;
}
