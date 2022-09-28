#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;

	int a, b, result;
	a = N / 5;	// 5kg으로 최대 봉지 수

	while (true) {
		if (a < 0) break;

		if ((N - a * 5) % 3 == 0) {
			b = (N - a * 5) / 3;
			break;
		}

		a--;	// 5kg 봉지 수 빼면서 3kg 봉지로 가능한지 확인
	}

	if (a < 0) result = -1;
	else result = a + b;

	cout << result << '\n';

	return 0;
}