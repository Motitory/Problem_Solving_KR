#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;

	vector<pair<int, int>> v;

	int x, y;
	for (int i = 1; i <= N; i++) {
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}

	sort(v.begin(), v.end());
	for (int i = 0; i < N; i++)
		cout << v[i].first << " " << v[i].second << '\n';

	return 0;	
}