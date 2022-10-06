#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	long long a, b;
	cin >> a >> b;

	if (a > b) swap(a, b);
 
	if (a == b || a + 1 == b) cout << 0 << '\n';
	else {
		cout << b - a - 1 << '\n';

		for (long long i = a + 1; i < b; i++) {
			cout << i << ' ';
		}
	}

	return 0;
}