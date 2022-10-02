#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;

	while (N > 0) {
		N--;
		string str;
		cin >> str;
		stack<string> st;
		string answer = "YES";
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(') {
				st.push(str);
			} else if (str[i] == ')' && !st.empty()) {
				st.pop();
			} else {
				answer = "NO";
				break;
			}
		}

		if (!st.empty()) answer = "NO";

		cout << answer << '\n';
	}

	return 0;	
}