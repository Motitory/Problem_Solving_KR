#include <iostream>
#include <memory.h>
#include <math.h>

#define MAX_N 4000001

using namespace std;

unsigned char sieve[(MAX_N + 7) / 8];
int pSum[MAX_N];

// k가 소수인지 확인
inline bool isPrime(int k) {
	return sieve[k >> 3] & (1 << (k & 7));
}

// k가 소수가 아니라고 표현
inline void setComposite(int k) {
	sieve[k >> 3] &= ~(1 << (k & 7));
}

// 비트 마스크를 이용한 에라토스테네스의 체 구현
// 해당 함수를 실행한 후, isPrime()을 이용해 각 수가 소수인지 확인이 가능하다.
void eratosthenes(int n) {
	memset(sieve, 255, sizeof(sieve));
	setComposite(0);
	setComposite(1);

	int sqrtn = int (sqrt(n));
	for (int i = 2; i <= sqrtn; i++) {
		// 이 수가 아직 지워지지 않았다면
		if (isPrime(i)) {
			// i의 배수 j들에 대해 isPrime[i] = false로 둔다.
			// i * i 미만의 배수는 이미 지워졌으므로 상관x
			for (int j = i * i; j <= n; j += i)
				setComposite(j);
		}
	}
}

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int n, p1 = 0, p2 = 1;
	int ans = 0;
	int cnt = 0;
	int size;

	cin >> n;
	eratosthenes(n);

	// 소수의 부분 합을 구한다.
	while (p1 <= n) {
		if (isPrime(p1)) {
			pSum[p2] = pSum[p2 - 1] + p1;
			p2++;
		}
		p1++;
	}

	size = p2 - 1;

	p1 = 1;
	p2 = 1;


	// p1이 오버플로우 되는 경우 break
	while (!(p1 > size && p1 > p2)) {
		// p1 ~ p2 합이 n과 같으면
		if (pSum[p2] - pSum[p1 - 1] == n) {
			cnt++;
			// p1 == p2이면 p2증가
			if (p1 == p2)
				p2++;
			
			// 그 외에는 p1증가
			else
				p1++;
		}

		// p1 ~ p2 합이 n보다 작으면
		else if (pSum[p2] - pSum[p1 - 1] < n) {
			// p2가 아직 끝점 도달하지 못했다면 p2 증가
			if (p2 < size)
				p2++;

			// 그 외에는 p1증가
			else
				p1++;
		}

		// p1~p2까지 합이 n보다 크면
		else {
			// p1을 증가시켜보고, 부분합을 검사
			p1++;

			if (pSum[p2] - pSum[p1 - 1] == n) {
				cnt++;
				p1++;
			}
		}
	}
	
	cout << cnt << '\n';

	return 0;
}