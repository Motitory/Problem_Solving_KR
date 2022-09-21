#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;

	int fac = 1;

	for (int i = 2; i <= N; i++) {
		fac *= i;
	}

	cout << fac << '\n';
	return 0;
}
