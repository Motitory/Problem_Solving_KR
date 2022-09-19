#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	vector<int> v;
	int T, n;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		cin >> n;
		v.push_back(n);
	}

	sort(v.begin(), v.end());

	cout << v.front() * v.back() << '\n';

	return 0;
}