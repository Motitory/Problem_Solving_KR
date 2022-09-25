#include <iostream>
#include <queue>

using namespace std;

int n;		// 정점의 개수
int check[1001];		// 방문체크
int map[1001][1001];		// 맵 체크(인접행렬)

// dfs 구현하기 (스택이나 재귀로 구현)
void dfs(int v_num) {
	cout << v_num << " ";

	// 정점의 개수까지 방문
	for (int i = 1; i <= n; i++) {
		// 간선 상태 확인 && 방문 여부 확인
		if (map[v_num][i] && check[i] == 0) {
			check[i] = 1;		// 방문체크
			dfs(i);
		}
	}
}

// bfs는 큐로 구현
void bfs(int v_num) {
	queue<int> q;
	// bfs 방문할 곳 초기화
	for (int i = 0; i <= n; i++) {
		check[i] = 0;
	}

	// 시작정점을 queue에 push
	q.push(v_num);
	// 정점 1로 check
	check[v_num] = 1;

	// queue가 빌때까지 반복
	while (!q.empty()) {
		int num = q.front();	// queue의 첫번째 값 num에 저장
		q.pop();		// queue에서 맨 앞에 값 빼기
		cout << num << " ";

		// 모든 연결된 대한 정점에 대해서
		for (int i = 1; i <= n; i++) {
			// 갈 수 있는 정점 && 아직 가지 않은 경우
			if (map[num][i] && check[i] == 0) {
				q.push(i);
				check[i] = 1;
			}
		}
	}
}

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int m, v;		// m : 간선 개수, v : 탐색할 정점의 번호
	int x, y;		// 정점 입력
	cin >> n >> m >> v;		// 정점의 개수 , 간선의 개수, 탐색할 정점의 번호

	// 모든 간선 1로 초기화 시키기
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		map[x][y] = 1;
		map[y][x] = 1;
	}

	// 시작하는 정점을 1로 초기화, 시작점 체크
	check[v] = 1;

	// dfs call
	dfs(v);
	cout << '\n';
	// bfs call
	bfs(v);
	cout << '\n';

	return 0;
}