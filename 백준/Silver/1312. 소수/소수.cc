#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int A, B, N, ret;
	cin >> A >> B >> N;

	while (N--) {
		A %= B;
		A *= 10;
		ret = A / B;
	}

	cout << ret << '\n';

	return 0;
}