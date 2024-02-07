#include <iostream>
#include <stack>

using namespace std;

int precedence(char ch) {
	if (ch == '(' || ch == ')') return 0;
	if (ch == '+' || ch == '-') return 1;
	else return 2;
}

string str, ans;
stack<char> stk;

int main() {
	cin >> str;
	for (char ch : str) {
		if (ch >= 'A' && ch <= 'Z')
			ans += ch;
		else if (ch == '(')
			stk.push(ch);
		else if (ch == ')') {
			while (stk.top() != '(') {
				ans += stk.top();
				stk.pop();
			}
			stk.pop();
		}
		else {
			while (!stk.empty() && precedence(stk.top()) >= precedence(ch)) {
				ans += stk.top();
				stk.pop();
			}
			stk.push(ch);
		}
	}

	while (!stk.empty()) {
		ans += stk.top();
		stk.pop();
	}

	cout << ans << '\n';

	return 0;
}