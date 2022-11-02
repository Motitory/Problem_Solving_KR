#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

const int INF = 999999999;
const int MAX = 50;

int N;
// 출발 => 도착
int friends[MAX][MAX];

// floyd => n^3
void floyd() {
	 for (int k = 0; k < N; k++)
	 	for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++) {
				if (i == j || j == k || i == k) continue;
				// k를 거쳐가는게 적다면
				else if (friends[i][j] > friends[i][k] + friends[k][j])
					friends[i][j] = friends[i][k] + friends[k][j];
			}
}

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	cin >> N;

	// 입력
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		for (int j = 0; j < str.length(); j++) {
			// 자기자신인 경우
			if (i == j) friends[i][j] = 0;
			// 친구이면 1을, 친구가 아니면 INF로 변환
			else friends[i][j] = str[j] == 'Y' ? 1 : INF;
		}
	}

	// 플로이드 와샬 알고리즘
	floyd();

	int result = 0;

	// 2-친구의 수 찾기
	for (int i = 0; i < N; i++) {
		int cnt = 0;
		for (int j = 0; j < N; j++) {
			// 자기자신인 경우는 카운트 안함, 패스
			if (i == j)	continue;
			// 2-친구 의 수를 센다
			else if (friends[i][j] <= 2) cnt++;
		}
		result = max(result, cnt);
	}

	cout << result << '\n';

	return 0;
}