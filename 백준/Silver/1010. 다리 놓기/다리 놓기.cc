#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int T;
	cin >> T;
	while (T--) {
		int N, M;
		cin >> N >> M;

		// nCr = n! / (n - r)! / r! = (n - r)! * (1 / (n - r)!)
		// mCn
		int result = 1;
		int r = 1;
		for (int i = M; i > M - N; i--) {
			result *= i;
			result /= r++;
		}
		cout << result << '\n';
	}

	return 0;
}