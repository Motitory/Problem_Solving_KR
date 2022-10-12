#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int ans = 0;
	int n;
	cin >> n;

	// 뒤에 0의 개수 => 소인수분해 시 2 * 5 의 개수 => 2의 갯수는 항상 5보다 많음
	// 따라서 5의 개수 세기
	// 25의 경우 5 * 5 * 1 이므로, 5가 2번 곱해짐.
	// 즉 ans = n / (5 * 1) + n / (5 * 2) + n / (5 * 3) + ...
	for (int i = 5; i <= n; i *= 5)
		ans += n / i;

	cout << ans << '\n';

	return 0;
}