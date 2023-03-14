#include <bits/stdc++.h>

using namespace std;

int A, B, C, start, finish;
vector<int> v(101);
int answer;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> A >> B >> C;
	for (int i = 0; i < 3; i++) {
		cin >> start >> finish;
		for (int i = start + 1; i <= finish; i++) {
			v[i]++;
		}
	}

	for (auto i : v) {
		if (i == 0) continue;
		else if (i == 1) answer += A;
		else if (i == 2) answer += (B * 2);
		else if (i == 3) answer += (C * 3);
	}

	cout << answer << '\n';

	return 0;
}