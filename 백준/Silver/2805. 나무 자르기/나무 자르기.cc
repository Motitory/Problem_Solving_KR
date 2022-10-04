#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, M, length, max = 0, result;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> length;
		v.push_back(length);
		if (max < length) max = length;
	}

	int start = 0, end = max;
	
	while (start <= end) {
		int mid = (start + end) / 2;
		long long int total = 0;

		for (int i = 0; i < N; i++) {
			if (v[i] > mid) {
				total += v[i] - mid;
			}
		}

		if (total >= M) {
			result = mid;
			start = mid + 1;
		} else {
			end = mid - 1;
		}
	}

	cout << result << '\n';

	return 0;
}