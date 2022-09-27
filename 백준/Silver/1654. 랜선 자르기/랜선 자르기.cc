#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	unsigned int N, K;
	cin >> K >> N;

	vector<unsigned int> v;

	unsigned int temp, maxV = 0;
	for (int i = 1; i <= K; i++) {
		cin >> temp;
		v.push_back(temp);
		maxV = max(maxV, temp);
	}

	// binary search algorithm
	unsigned int left = 1, right = maxV, mid, ans = 0;

	while (left <= right) {
		// mid
		mid = (left + right) / 2;

		// 가능 갯수 변수
		unsigned int count = 0;

		for (int i = 0; i < K; i++) {
			// mid 값으로 나눈 몫들 => 만들 수 있는 랜선 갯수
			count += v[i] / mid;
		}

		if (count >= N) {
			// 원하는 랜선 갯수이상으로 나온다면, 더 긴 길이의 랜선도 가능하지 않을까 탐색
			left = mid + 1;
			// 더 긴 길이로 갱신
			ans = max(ans, mid);
		}
		else {
			// right를 움직여 N개를 만들 수 있지 않을까 체크
			right = mid - 1;
		}
	}

	cout << ans << '\n';

	return 0;
}