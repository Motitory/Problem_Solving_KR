#include <iostream>
#include <stack>
#include <string>
#include <iomanip>

using namespace std;

int operand[26];
int n;
string postfix;

int main() {	
	cin >> n;
	cin >> postfix;

	for (int i = 0; i < n; i++)
		cin >> operand[i];

	stack<double> stk;

	for (char ch : postfix) {
		if (ch >= 'A' && ch <= 'Z')
			stk.push(operand[ch - 'A']);
		else {
			double op2 = stk.top(); stk.pop();
			double op1 = stk.top(); stk.pop();
			if (ch == '+')
				stk.push(op1 + op2);
			else if (ch == '-')
				stk.push(op1 - op2);
			else if (ch == '*')
				stk.push(op1 * op2);
			else if (ch == '/')
				stk.push(op1 / op2);
		}
	}

	cout << fixed << setprecision(2) << stk.top() << '\n';

	return 0;
}