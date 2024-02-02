#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, X;
	queue<int> q;
	string str;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> str;

		if (str == "push") {
			cin >> X;
			q.push(X);
		} else if (str == "pop") {
			if (q.empty())	cout << "-1" << '\n';
			else {
				cout << q.front() << '\n';
				q.pop();
			}
		} else if (str == "size") {
			cout << q.size() << '\n';
		} else if (str == "empty") {
			cout << q.empty() << '\n';
		} else if (str == "front") {
			if (q.empty()) cout << "-1" << '\n';
			else cout << q.front() << '\n';
		} else if (str == "back") {
			if (q.empty())	cout << "-1" << '\n';
			else cout << q.back() << '\n';
		}
	}

	return 0;
}