#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int Max = 10001;
vector<int> v;

int binarySearch(int low, int high, int target) {
	// 없는 경우
	if (low > high)
		return 0;
	
	int mid = (low + high) / 2;

	if (v[mid] == target)
		return 1;
	else if (v[mid] > target)
		return binarySearch(low, mid - 1, target);
	else
		return binarySearch(mid + 1, high, target);
}

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, M, temp;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> temp;
		v.push_back(temp);
	}
	
	sort(v.begin(), v.end());

	cin >> M;

	for (int i = 1; i <= M; i++) {
		cin >> temp;
		cout << binarySearch(0, N - 1, temp) << '\n';
	}

	return 0;
}