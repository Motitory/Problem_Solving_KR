#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	// i값을 끝으로 가장 긴 증가하는 부분 수열
	vector<int> d1(n);
	// i값을 시작으로 가장 긴 감소하는 부분 수열
	vector<int> d2(n);
	
	for (int i = 0; i < n; i++) {
		d1[i] = 1;
		for (int j = 0; j < i; j++)
			if (a[j] < a[i] && d1[j] + 1 > d1[i]) d1[i] = d1[j] + 1;
	}

	for (int i = n - 1; i >= 0; i--) {
		d2[i]	= 1;
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j] && d2[j] + 1 > d2[i]) d2[i] = d2[j] + 1;
	}

	int ans = 0; 
	for (int i = 0; i < n; i++) {
		if (ans < d1[i] + d2[i] - 1)
			ans = d1[i] + d2[i] - 1;
	}

	cout << ans << '\n';

	return 0;
}