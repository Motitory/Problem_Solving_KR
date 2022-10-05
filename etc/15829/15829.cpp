#include <iostream>
#include <string>

using namespace std;

const int MOD = 1234567891;          
const int MULTIPLY = 31;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int L;
	cin >> L;

	string str;
	cin >> str;

	long long sum = 0;
	long long R = 1;

	// 모듈러 연산 속성 적용
	// 1. (a + b) mod n = {(a mod n) + (b mod n)} mod n
	// 2. (a - b) mod n = {(a mod n) - (b mod n)} mod n
	// 3. (a * b) mod n = {(a mod n) * (b mod n)} mod n
	// 위 문제는 1번과 3번을 적용

	// H = Σ(i = 0부터 l - 1) a의 i번째 항 * r ^ i mod M
	// H = {(a의 0번째 항 * r ^ 0 mod M) + (a의 1번째 항 * r ^ 1 mod M) ... (a의 l - 1번째 항 * r ^ (l - 1) mod M)} mod M
	// H = {(a의 0번째 항 mod M) * (r ^ 0 mod M) mod M} + {(a의 1번째 항 mod M) * (r ^ 1 mod M) mod M} + ... {(a의 l - 1번째 항 mod M) * (r ^ (l - 1) mod M) mod M}
	for (int i = 0; i < L; i++) {
		// a의 l - 1 번째 항 mod M		
		sum = (sum + (str[i] - 'a' + 1) * R) % MOD;
		// {r ^ (l - 1)} mod M
		R = (R * MULTIPLY) % MOD;
	}

	cout << sum << '\n';

	return 0;
}