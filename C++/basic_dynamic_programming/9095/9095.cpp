#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	// n값 담는 백터
	vector<int> n;

	// 11까지 케이스 수 담는 벡터
	vector<int> v(12, 0);
	// 1, 2, 3의 케이스 수
	v[1] = 1; v[2] = 2; v[3] = 4;
	
	// 테스트 케이스 수
	int T; cin >> T;

	// n 값들 입력
	for (int i = 0; i < T; i++) {
		int num; cin >> num;
		n.push_back(num);
	}

	// 가장 큰 n 값 찾기 (n이 크지 않으면 11까지 돌 필요 없도록)
	int max = *max_element(n.begin(), n.end());

	// max 케이스까지의 케이스 수 담음
	for (int i = 4; i <= max; i++) {
		v[i] = v[i - 3] + v[i - 2] + v[i - 1];
	}
	
	// 출력
	for (auto& i : n) {
		cout << v[i] << '\n';
	}
}