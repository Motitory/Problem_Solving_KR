#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int X;
	cin >> X;
	vector<int> dp(X + 1, 0);

	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;
	for (int i = 4; i <= X; i++) {
		dp[i] = dp[i - 1] + 1;
		if (!(i % 3)) dp[i] = min(dp[i], dp[i / 3] + 1);
		if (!(i % 2)) dp[i] = min(dp[i], dp[i / 2] + 1);
	}

	cout << dp[X] << endl;

	return 0;
}