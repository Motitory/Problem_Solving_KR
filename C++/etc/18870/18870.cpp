#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n;
	cin >> n;
	vector<int> v(n);
	// 입력
	for (int i = 0; i < n; i++)
		cin >> v[i];
	// 복사
	vector<int> vt = v;
	// 정렬
	sort(vt.begin(), vt.end());
	// 중복 값 제거
	vt.erase(unique(vt.begin(), vt.end()), vt.end());

	for (int i = 0; i < n; i++) {
		// i번째 요소 값 it
		auto it = lower_bound(vt.begin(), vt.end(), v[i]);
		// 요소값에서 시작 주소 값 뺀 것이 답
		cout << it - vt.begin() << ' ';
	}
		
	return 0;
}