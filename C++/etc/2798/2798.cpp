#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, M;
	cin >> N >> M;

	int arr[N + 1];

	for (int i = 1; i <= N; i++)
		cin >> arr[i];

	int result = 0;
	int tmp;

	for (int i = 1; i <= N - 2; i++) 
		for (int j = i + 1; j <= N - 1; j++)
			for (int k = j + 1; k <= N; k++) {
				tmp = arr[i] + arr[j] + arr[k];
				if (tmp <= M && tmp > result) result = tmp;
			}

	cout << result << '\n';

	return 0;	
}