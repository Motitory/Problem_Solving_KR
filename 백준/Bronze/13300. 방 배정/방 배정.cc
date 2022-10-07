#include <iostream>

using namespace std;


int arr[2][7];

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, K, S, Y, cnt = 0;
	cin >> N >> K;

	while (N--) {
		cin >> S >> Y;
		arr[S][Y]++;
	}
	
	for (int i = 0; i <= 1; i++) {
		for (int j = 1; j <= 6; j++) {
			if (arr[i][j] != 0) {
				if (arr[i][j] % K == 0) cnt += (arr[i][j] / K);
				else cnt += (arr[i][j] / K + 1);
			}
		}
	}

	cout << cnt << '\n';

	return 0;
}