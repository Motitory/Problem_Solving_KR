#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	map<string, int> ma;
	vector<string> v;

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n + m; i++) {
		string str;
		cin >> str;
		ma[str]++;
		// 양쪽 나온 값만 벡터에 입력
		if (ma[str] > 1)
			v.push_back(str);
	}
	sort(v.begin(), v.end());

	cout << v.size() << '\n';
	for (auto s : v)
		cout << s << '\n';

	return 0;
}