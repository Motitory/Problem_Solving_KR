#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int a, b, sum = 0;
	int add = 1;
	int num = add;
	cin >> a >> b;

	for (int i = 1; i <= b; i++) {
		if (num == 0) {
			add++;
			num = add;
		}

		if (i >= a) {
			sum += add;
		}

		num--;
	}
	cout << sum << '\n';

	return 0;
}