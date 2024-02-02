#include <iostream>
#include <queue>

using namespace std;

int box[1001][1001];		// 박스 범위 1000
int check[1001][1001];	// 체크 범위 1000
int dir[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};		// Left, Right, Down, Up

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	// 큐 선언 int
	queue<pair<int, int>> q;

	// M, N 입력
	int M, N; // M : 가로, N : 세로
	cin >> M >> N;

	// 전체 토마토 정보 체크
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			check[i][j] = -1;	// 전체 초기화
			// 박스 토마토 상태 입력
			cin >> box[i][j];

			// 박스에 익혀진 곳 체크
			if (box[i][j] == 1) {
				check[i][j] = 0;		// 익은 토마토 0으로 체크 (시작하자마자 익어있는 것들)
				q.push(make_pair(i, j));		// queue에 익은 토마토 위치 정보 push, 등록
			}
		}
	}

	int next_X, next_Y;	// 다음 위치

	// 큐가 비어있지 않는 경우
	while (!q.empty()) {
		int cur_X = q.front().first;		// x축 좌표
		int cur_Y = q.front().second;		// y축 좌표

		q.pop();		// queue 맨 앞에 있는 것들 pop
		for (int i = 1; i <= 4; i++) {
			next_X = cur_X + dir[i - 1][0];	// 다음 X 좌표
			next_Y = cur_Y + dir[i - 1][1];	// 다음 X 좌표


			// box가 비어있지 않고, check 된 곳이 없을 경우 (-1일 경우는 -1 전체 초기화 했음)
			if (box[next_X][next_Y] != -1 && check[next_X][next_Y] == -1) {
				q.push(make_pair(next_X, next_Y));		// 다음 좌표를 queue에 넣기
				check[next_X][next_Y] = check[cur_X][cur_Y] + 1;	// 다음날 해당 토마토는 익음
			}
		}
	}

	int result = 0;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			// 다 익지 못하는 상황이면 종료
			if (box[i][j] == 0 && check[i][j] == -1) {
					cout << "-1" << '\n'; return 0;
			}
			// 익혀진 곳 중에 가장 큰 값을 가진 곳이 토마토가 모두 익은 날
			if (check[i][j] > result) {
				result = check[i][j];
			}
		}
	}
	cout << result << '\n';
	return 0;
}