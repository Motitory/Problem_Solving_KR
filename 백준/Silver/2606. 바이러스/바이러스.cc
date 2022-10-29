#include <iostream>
#include <vector>
using namespace std;

// 인접 리스트
vector<int> a[101];
// 방문여부 체크
bool check[101];
int cnt = 0;

void dfs(int x) {
	check[x] = true;
	for (int i = 0; i < a[x].size(); ++i) {
		int y = a[x][i];
		// 아직 체크안했다면
		if (!check[y]) {
			dfs(y);
			cnt++;
		}
	}
}

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	// n: 노드 개수, m: 엣지 개수
	int n, m;
	cin >> n >> m;
	// 엣지 연결
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		a[u].push_back(v);
		a[v].push_back(u);
	}
	dfs(1);
	cout << cnt << '\n';

	return 0;
}