#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	// 소인수분해 -> 갯수 세기 -> 해당 갯수가 소수인가?
	int A, B;
	cin >> A >> B;

	int result = 0;
	for (int i = A; i <= B; i++) {
		// 소인수분해 했을 시, 소수의 갯수 세기
		int n = i; 
		int count = 0;
		for (int j = 2; j <= sqrt(n); j++) {
			while (n % j == 0) {
				n /= j;
				count++;
			}
		}
		if (n > 1) {
			count++;
		}

		// 소수의 갯수가 소수인가? 체크
		if (count != 1) {
			int temp = 0;
			for (int j = 2; j <= sqrt(count); j++) {
				if (count % j == 0)
					temp++;
			}
			if (temp == 0) result++;
		}
	}
	cout << result << '\n';

	return 0;
}