#include <iostream>

using namespace std;

long long d[91];

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int N;
	cin >> N;

	d[0] = 0, d[1] = 1;

	// case 1. 맨 뒤가 0일때
			// 바로 앞은 0, 1 둘다 가능
	// case 2. 맨 뒤가 1일때
			// 바로 앞은 0만 가능
	// 따라서, n자리일때 d[n]의 경우 맨 뒤가 0일때는 d[n - 1],
	// 맨 뒤가 1일때는 바로 앞 자리 0으로 고정, d[n -2]와 동일.
	for (int i = 2; i <= N; i++)
		d[i] = d[i - 1] + d[i - 2];

	cout << d[N] << '\n';

	return 0;
}