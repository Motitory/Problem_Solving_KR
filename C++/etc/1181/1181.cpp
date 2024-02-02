#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compareWith(string a, string b) {
	if (a.length() == b.length())
		return a < b;
	return a.length() < b.length();
}

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;

	vector<string> v;
	for (int i = 1; i <= N; i++) {
		string temp;
		cin >> temp;
		if (find(v.begin(), v.end(), temp) == v.end())
			v.push_back(temp);
	}

	sort(v.begin(), v.end(), compareWith);

	for (string val : v)
		cout << val << '\n';

	return 0;
}