#include <iostream>
#include <map>

using namespace std;

int pSum[200001];

map<int, long long> MAP;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, k;
	long long cnt = 0;

	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		int temp;
		cin >> temp;
		pSum[i] = pSum[i - 1] + temp;
	}

	for (int i = 1; i <= n; i++) {
		// i까지의 부분 합이 k일때
		if (pSum[i] == k)
			cnt++;
		
		// i까지 부분합 - k인 값이 이전에 존재했다면 cnt에 더해준다
		// pSum[i] - pSum[j - 1] = k일때,
		// pSum[i] - k = pSum[j - 1]
		// 즉, pSum[j - 1]값이 몇번 나왔는지 알면, 부분합 k가 나온 개수를 알 수 있다.
		cnt += MAP[pSum[i] - k];

		// i까지의 부분합을 map에 저장
		MAP[pSum[i]]++;

	}

	cout << cnt << '\n';

	return 0;	
}