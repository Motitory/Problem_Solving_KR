#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	// 1676번 팩토리얼의 0의 개수의 경우 항상 2의 갯수가 5의 갯수보다 많음.
	// 조합의 경우는 2의 개수가 5의 개수보다 적을 수도 있기 때문에 체크해줘야함.
	// nCm = n! / (n - m)! / m!
	long long two = 0, five = 0;
	long long n, m;
	cin >> n >> m;

	// n!의 2의 수
	for (long long i = 2; i <= n; i *= 2) {
		two += n / i;
	}
	// (n - m)!의 2의 수
	for (long long i = 2; i <= n - m; i *= 2) {
		two -= (n - m) / i;
	}
	// m!의 2의 수
	for (long long i = 2; i <= m; i *= 2) {
		two -= m / i;
	}
	// n!의 5의 수
	for (long long i = 5; i <= n; i *= 5) {
		five += n / i;
	}
	// (n - m)!의 5의 수
	for (long long i = 5; i <= n - m; i *= 5) {
		five -= (n - m) / i;
	}
	// m!의 5의 수
	for (long long i = 5; i <= m; i *= 5) {
		five -= m / i;
	}

	cout << min(two, five) << '\n';

	return 0;
}