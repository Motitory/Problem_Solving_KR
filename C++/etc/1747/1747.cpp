#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;

	int max = 1100000;
	vector<int> v(max + 1, 1);
	v[0] = 0; v[1] = 0;

	// 소수 체크
	for (int i = 2; i <= sqrt(max); i++) {
		if (v[i] == 1) {
			for (int j = i * i; j <= max; j += i)  {
				v[j] = 0;
			}
		}
	}

	for (int i = N; i <= max; i++) {
		// 소수이면
		if (v[i] == 1) {
			// 팰린드롬 체크
			int n = i;
			int r = 0;
			while (n != 0) { 
				r = r * 10 + n % 10;
				n /= 10;  
			}
			if (r == i) {
				cout << i << '\n';
				break;
			}
		}
	}

	return 0;
}