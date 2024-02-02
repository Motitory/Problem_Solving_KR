#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, M, card;
	cin >> N;
	int arr[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N);	// 이진 탐색을 위한 정렬

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> card;
		// upper_bound(, , x) : x를 초과하는 값이 처음 나타나는 위치
		// lower_bound(, , x) : x이상의 값이 처음 나타나는 위치
		cout << upper_bound(arr, arr + N, card) - lower_bound(arr, arr + N, card) << " ";
	}

	return 0;
}