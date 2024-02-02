#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string str;
	getline(cin, str);

	stack<int> stk;
	int cnt = 0;
	int n = str.length();
	for (int i = 0; i < n; i++) {
		if (str[i] == '(') {
			stk.push(i);
		} else if (str[i] == ')') {
			if (stk.top() == i - 1) {
				stk.pop();
				cnt += stk.size();
			} else {
				stk.pop();
				cnt += 1;
			}
		}
	}

	cout << cnt << '\n';

	return 0;
}