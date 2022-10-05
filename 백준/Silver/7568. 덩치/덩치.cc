#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, X, Y;
	cin >> N;

	vector<pair<int, int>> v;	

	for (int i = 1; i <= N; i++) {
		cin >> X >> Y;
		v.push_back(make_pair(X, Y));
	}

	for (int i = 0; i < N; i++) {
		int cnt = 1;
		for (int j = 0; j < N; j++) {
			if (v[i].first < v[j].first) {
				if (v[i].second < v[j].second) {
					cnt++;
				}
			}
		}
		cout << cnt << '\n';
	}

	return 0;
}