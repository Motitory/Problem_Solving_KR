#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	// Prefix Sum, two pointer
	int N, S;
	int max_N = 100001;
	cin >> N >> S;

	int arr[max_N];
	int pSum[max_N];
	int minLen = max_N;
	int len = 0;

	int p1 = 1, p2 = 1;

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
		pSum[i] = pSum[i - 1] + arr[i];
	}

	while (p1 <= p2) {		// p1이 끝까지 도달, 그리고 p1 = p2인 경우들이 아니면 계속 반복
		if (pSum[p2] - pSum[p1 - 1] >= S) {		// p1에서 p2까지의 합이 S보다 같거나 크면
			len = p2 - p1 + 1;
			if (minLen > len)
				minLen = len;

			p1++;			
		}
		else { // p1에서 p2까지의 합이 S보다 작으면
			// p2가 끝까지 도달하지 않았으면 p2를 증가, 도달해있으면 p1을 증가
			if (p2 < N)
				p2++;
			else 
				p1++;
		}
	}

	if (minLen == max_N) cout << "0" << '\n';
	else cout << minLen << '\n';

	return 0;	
}