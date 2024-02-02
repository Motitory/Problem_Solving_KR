#include <iostream>

using namespace std;

int sorted[1000000];

// 두 배열 merge
void merge(int *data, int start, int mid, int end) {
	int i = start;
	int j = mid + 1;
	int k = start;

	// data[] 합병
	while (i <= mid && j <= end) {
		if (data[i] <= data[j]) {
			sorted[k] = data[i];
			i++;
		} else {
			sorted[k] = data[j];
			j++;
		}
		k++;
	}

	// 왼쪽 부분에 남은 값들 복사
	if (i > mid) {
		for (int t = j; t <= end; t++) {
			sorted[k] = data[t];
			k++;
		}
	} else {
		for (int t = i; t <= mid; t++) {
			sorted[k]  = data[t];
			k++;
		}
	}

	// 인자로 온 배열에 값 복사
	for (int t = start; t <= end; t++) {
		data[t] = sorted[t];
	}
}

void merge_sort(int *data, int start, int end) {
	if (start < end) {
		int mid = (start + end) / 2;
		merge_sort(data, start, mid);	// 좌측정렬
		merge_sort(data, mid + 1, end); // 우측정렬
		merge(data, start, mid, end);
	}
}


int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;
	
	int arr[N + 1];

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}

	// merge sort
	merge_sort(arr, 1, N);


	for (int i =1; i <= N; i++) {
		cout << arr[i] << '\n';
	}

	return 0;
}