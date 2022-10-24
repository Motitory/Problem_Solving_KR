#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(int a, int b) {
	return a > b;
}

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n;
	cin >> n;
	vector<int> a;
	vector<int> b;

	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		a.push_back(temp);
	}

	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		b.push_back(temp);
	}
	sort(a.begin(), a.end(), cmp);
	sort(b.begin(), b.end());

	int result = 0;
	for (int i = 0; i < n; i++) {
		result += a[i] * b[i];
	}

	cout << result << '\n';
	return 0;
}