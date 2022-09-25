#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;

	int arr[N + 1];
	int sum[N + 1];

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
		sum[i] = sum[i - 1] + arr[i];
	}

	int M;
	cin >> M;
	int x, y;
	for (int i = 1; i <= M; i++) {
		cin >> x >> y;
		cout << sum[y] - sum[x - 1] << '\n';
	}

	return 0;
}