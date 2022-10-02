#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;

	string str;

	stack<int> S;

	for (int i = 1; i <= N; i++) {
		cin >> str;

		if (str == "push") {
			int temp;
			cin >> temp;
			S.push(temp);
		} else if (str == "pop") {
			if (S.empty()) cout << "-1" << '\n';
			else {
				cout << S.top() << '\n';
				S.pop();
			}
		} else if (str == "size") {
			cout << S.size() << '\n';
		} else if (str == "empty") {
			if (S.empty()) cout << '1' << '\n';
			else cout << '0' << '\n';
		} else if (str == "top") {
			if (S.empty()) cout << "-1" << '\n';
			else cout << S.top() << '\n'; 
		}
	}

	return 0;
}