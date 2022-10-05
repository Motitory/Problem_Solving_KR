#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T;
	cin >> T;
	while (T--) {
		int N, M;
		cin >> N >> M;

		// 문서 정보
		queue<pair<int, int>> docList;

		// 가장 높은 중요도를 바로 알기 위해 우선순위 큐를 사용
		priority_queue<int> maxImportance;
		
		// 인쇄횟수
		int printCount = 0;

		// 데이터 입력
		for (int i = 0; i < N; i++) {
			int value;
			cin >> value;

			docList.push(make_pair(i, value));
			maxImportance.push(value);
		}

		// 인쇄 시작
		while (!docList.empty()) {
			int idx = docList.front().first;
			int importance = docList.front().second;

			// 중요도가 더 높은 문서의 경우 뒤로 보냄.
			if (maxImportance.top() > importance) {
				docList.push(docList.front());
				docList.pop();
			}
			// 그렇지 않은 경우는 인쇄
			else {
				docList.pop();
				maxImportance.pop();
				printCount++;

				// 궁금한 문서가 출력되었을 경우
				if (idx == M) {
					// 결과 출력
					cout << printCount << '\n';
					break;
				}
			}
		}
	}

	return 0;
}