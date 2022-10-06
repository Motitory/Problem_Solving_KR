#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int num, result = -1, sum = 0, min = 2000000000;

	for (int i = 1; i <= 7; i++) {
		cin >> num;
		if (num % 2 == 1) {
			result = 0;
			sum += num;
			if (num < min) min = num;
		}
	}

	if (result == -1) cout << result << '\n';
	else cout << sum << ' ' << min << '\n';

	return 0;
}