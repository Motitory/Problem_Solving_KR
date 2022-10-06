#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int a, b, c;
	cin >> a >> b >> c;

	if (a == b && b == c) cout << 10000 + a * 1000 << '\n';
	else if (a == b) cout << 1000 + a * 100 << '\n';
	else if (a == c) cout << 1000 + a * 100 << '\n';
	else if (b == c) cout << 1000 + b * 100 << '\n';
	else {
		int max = a;
		if (max < b) max = b;
		if (max < c) max = c;
		cout << max * 100 << '\n';
	}

	return 0;
}