#include <iostream>
#include <stack>
#include <string>

using namespace std;

void print(stack<char> &s) {
	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
}

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string str;
	getline(cin, str);
	bool tag = false;
	stack<char> stk;

	for (char ch : str) {
		if (ch == '<') {
			print(stk);
			tag = true;
			cout << ch;
		} else if (ch == '>') {
			tag = false;
			cout << ch;
		} else if (tag) {
			cout << ch;
		} else {
			if (ch == ' ') {
				print(stk);
				cout << ch;
			} else {
				stk.push(ch);
			}
		}
	}
	print(stk);
	cout << '\n';

	return 0;
}