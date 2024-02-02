#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

char a[600000];

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> a;
	// 커서 기준 왼쪽 스택과 오른쪽 스택을 생각
	stack<char> left, right;
	int n = strlen(a);
	for (int i = 0; i < n; i++) {
		left.push(a[i]);
	}
	int N;
	cin >> N;

	while (N--) {
		char what;
		cin >> what;
		if (what == 'L') {
			if (!left.empty()) {
				right.push(left.top());
				left.pop();
			}
		} else if (what == 'D') {
			if (!right.empty()) {
				left.push(right.top());
				right.pop();
			}
		} else if (what == 'B') {
			if (!left.empty()) {
				left.pop();
			}
		} else if (what == 'P') {
			char c;
			cin >> c;
			left.push(c);
		}
	}

	while (!left.empty()) {
		right.push(left.top());
		left.pop();
	}

	while (!right.empty()) {
		cout << right.top();
		right.pop();
	}

	return 0;
}