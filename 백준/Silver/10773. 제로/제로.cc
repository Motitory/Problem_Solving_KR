#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	stack<int> stk;

	int N, temp;
	cin >> N;

	while (N--) {
		cin >> temp;

		if (temp == 0) stk.pop();
		else stk.push(temp);
	}

	int sum = 0;
	
	while (!stk.empty()) {
		sum += stk.top();
		stk.pop();
	}

	cout << sum << '\n';

	return 0;
}