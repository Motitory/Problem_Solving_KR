#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int x, y, result = 0;
	cin >> x >> y;

	if (x > 0) {
		if (y > 0) result = 1;
		else result = 4;
	} else {
		if (y > 0) result = 2;
		else result = 3;
	}

	cout << result << '\n';

	return 0;
}