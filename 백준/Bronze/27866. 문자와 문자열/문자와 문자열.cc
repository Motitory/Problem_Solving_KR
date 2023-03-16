#include <bits/stdc++.h>

using namespace std;

string str;
int num;

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> str;
	cin >> num;
	cout << str[num - 1] << '\n';

	return 0;
}