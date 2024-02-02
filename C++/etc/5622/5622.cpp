#include <bits/stdc++.h>

using namespace std;

string str;
int num[26] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};
int ret;

int main(int argc, char **argv) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		ret += num[str[i] - 'A'];
	}
	cout << ret << '\n';
	return 0;
}