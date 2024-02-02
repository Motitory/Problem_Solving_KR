#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int count[42] = {};

	int n;
	for (int i = 1; i <= 10; i++) {
		cin >> n;
		count[n % 42]++;
	}

	int cnt = 0;

	for (int v : count) {
		if (v > 0)
			cnt++;
	}	

	cout << cnt << '\n';

	return 0;
}