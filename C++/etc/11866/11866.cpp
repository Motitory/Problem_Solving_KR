#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, K;
	queue<int> q;

	cin >> N >> K;

	for (int i = 1; i <= N; i++) q.push(i);

	cout << "<";

	while (!q.empty()) {
		for (int i = 1; i < K; i++) {
			// i번째 카드를 맨 뒤로 옮기기
			q.push(q.front());	
			q.pop();
		}
		cout << q.front();
		if (q.size() != 1) cout << ", ";
		q.pop();
	}
	cout << ">" << '\n';

	return 0;
}