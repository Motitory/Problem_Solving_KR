#include <iostream>

using namespace std;

int calMember(int a, int b) {
	if (a == 0) return b;
	if (b == 1) return 1;
	return (calMember(a - 1, b) + calMember(a, b - 1));
}

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T;
	cin >> T;

	while (T--) {
		int k, n;
		cin >> k >> n;

		cout << calMember(k, n) << '\n';
	}

	return 0;
}