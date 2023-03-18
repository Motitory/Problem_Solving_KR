#include <bits/stdc++.h>

using namespace std;

// 킹 1개, 퀸 1개, 룩 2개, 비숍 2개, 나이트 2개, 폰 8개
int chess[6] = {1, 1, 2, 2, 2, 8};
int arr[6];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	for (int i = 0; i < 6; i++)
		cin >> arr[i];

  for (int i = 0; i < 5; i++)
		cout << chess[i] - arr[i] << ' ';

	cout << chess[5] - arr[5] << '\n';
	
	return 0;
}