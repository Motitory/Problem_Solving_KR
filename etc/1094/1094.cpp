#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n;
	cin >> n;

	int cnt = 0;
	while (n > 0) {
		cnt += n % 2;
		n /= 2;
	}
	cout << cnt << '\n';

	return 0;
}