#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T;
	cin >> T;
	
	cin.ignore();
	while (T--) {
		string str;
		getline(cin, str);
		str += '\n';
		stack<char> stk;

		for (char ch : str) {
			if (ch == ' ' || ch == '\n') {
				while (!stk.empty()) {
					cout << stk.top();
					stk.pop();
				}
				cout << ch;
			} else {
				stk.push(ch);
			}
		}
	}

	return 0;
}