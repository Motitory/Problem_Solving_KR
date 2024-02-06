#include <iostream>
#include <string>

using namespace std;

int a, b, c, d;

int main() {
	cin >> a >> b >> c >> d;

	string str1 = to_string(a) + to_string(b);
	string str2 = to_string(c) + to_string(d);

	long long ans = stoll(str1) + stoll(str2);

	cout << ans << '\n';

	return 0;
}