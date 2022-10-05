#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	while (true) {
		string str;
		getline(cin, str);
		if (str == ".") break;

		stack<char> stk;
		string result = "yes";

		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(') stk.push('(');
			else if (str[i] == ')') {
				if (!stk.empty() && stk.top() == '(') {
					stk.pop();
				} else {
					result = "no";
					break;
				}
			}
			else if (str[i] == '[') stk.push('[');
			else if (str[i] == ']') {
				if (!stk.empty() && stk.top() == '[') {
					stk.pop();
				} else {
					result = "no";
					break;
				}	
			}
		}

		if (!stk.empty()) result = "no";

		cout << result << '\n';
	}
	
	return 0;
}