#include <iostream>

using namespace std;

int d[100001];

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		d[i] = i;
		for (int j = 1; j * j <= i; j++) {
			if (d[i] > d[i - j * j] + 1) d[i] = d[i - j * j] + 1;
		}
	}

	cout << d[N] << '\n';

	return 0;
}
