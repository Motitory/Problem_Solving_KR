#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;

	vector<int> v(1001, 1);
	v[0] = 0; v[1] = 0;

	for (int i = 2; i <= sqrt(1000); i++) {
		if (v[i] == 1) {
			for (int j = i * i; j <= 1000; j += i) {
				v[j] = 0;
			}
		}
	}

	int num, count = 0;

	for (int i = 1; i <= N; i++) {
		cin >> num;
		if (v[num] == 1) {
			count++;
		}
	}

	cout << count << '\n';

	return 0;
}