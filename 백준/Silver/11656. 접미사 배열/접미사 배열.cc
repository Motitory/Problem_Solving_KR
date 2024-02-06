#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

string str;
int n;

int main() {
	cin >> str;
	n = str.size();
	vector<int> v;

	for (int i = 0; i < n; i++)
		v.push_back(i);

	sort(v.begin(), v.end(), [&](int a, int b) {
		return strcmp(str.c_str() + a, str.c_str() + b) < 0;
	});

	for (int i : v)
		cout << str.substr(i) << '\n';

	return 0;
}