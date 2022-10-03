#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	stack<int> stk;
	int N;
	string result;

	cin >> N;
	// 스택의 마지막 값
	int last = 0;

	while (N--) {
		// 수열 입력 값
		int x;
		cin >> x;
		// 입력값이 현재 스택의 마지막 값보다 크다면
		if (x > last) {
			while (x > last) {
				// 스택에 추가
				stk.push(++last);
				result += '+';
			}
			// 수열 입력 값, 스택에서 꺼내기
			stk.pop();
			result += '-';
		}
		else {
			bool found = false;
			if (!stk.empty()) {
				// x가 last 값이랑 같아야 제대로 pop 가능(오름차순을 위해)
				if (x == stk.top()) {
					found = true;
				}
				stk.pop();
				result += '-';
			}
			if (!found) {
				cout << "NO" << '\n';
				return 0;
			}
		}
	}

	// 출력
	for (auto x : result) {
		cout << x << '\n';
	}

	return 0;
}