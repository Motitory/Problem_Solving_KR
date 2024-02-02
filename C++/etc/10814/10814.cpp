#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b) {
	return a.first < b.first;
}

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;

	vector<pair<int, string>> v;
	int age; string name;
	for (int i = 1; i <= N; i++) {
		cin >> age >> name;
		v.push_back(make_pair(age, name));
	}

	stable_sort(v.begin(), v.end());

	for (int i = 0; i < N; i++) {
		cout << v[i].first << " " << v[i].second << '\n';
	}

	return 0;
}