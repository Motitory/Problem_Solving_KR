#include <iostream>
#include <queue>

using namespace std;

int n, k;
bool visited[100001];

// BFS (Breadth-first search), 너비 우선 탐색 사용 : 시작 정점으로 방문 -> 인접한 모든 정점을 우선 방문
void bfs(int a) {
	queue<pair<int, int>> q;
	q.push(make_pair(a, 0));
	
	while (!q.empty()) {
		int x = q.front().first;	// 위치
		int cnt = q.front().second;	// 이동횟수 
		q.pop();
		if (x == k) {
			cout << cnt << '\n';
			break;
		}
		if ((x + 1 >= 0) && (x + 1 < 100001)) {
			if (!visited[x + 1]) {	// 방문체크
				visited[x + 1] = true;
				q.push(make_pair(x + 1, cnt + 1));
			}
		}
		if ((x - 1 >= 0) && (x - 1 < 100001)) {
			if (!visited[x - 1]) {	// 방문체크
				visited[x - 1] = true;
				q.push(make_pair(x - 1, cnt + 1));
			}
		}
		if ((2 * x >= 0) && (2 * x < 100001)) {
			if (!visited[2 * x]) {	// 방문체크
				visited[2 * x] = true;
				q.push(make_pair(2 * x, cnt + 1));
			}
		}		// 다음 순서를 queue에 넣어줌.
	}
}

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n >> k;
	visited[n] = true;
	bfs(n);
	return 0;
}