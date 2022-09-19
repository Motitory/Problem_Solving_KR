#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	long n;
	cin >> n;

	// 몫과 나머지가 같은 수들
	// 갯수는 n - 1개, 초항은 n + 1, 등차 n + 1인 등차수열
	// 등차수열의 합 공식 : n(a + l) / 2 = n(2a + (n - 1)d) / 2

	long result = (n - 1) * (2 * (n + 1) + (n - 2) * (n + 1)) / 2;
	cout << result << "\n";

	return 0;
}