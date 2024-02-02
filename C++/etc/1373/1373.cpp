#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	string str;
	cin >> str;
	int n = str.size();

	if (n % 3 == 1)
		cout << str[0];
	else if (n % 3 == 2)
		cout << (str[0] - '0') * 2 + (str[1] - '0');
	for (int i = n % 3; i < n; i += 3)
		cout << (str[i] - '0') * 4 + (str[i + 1] - '0') * 2 + (str[i + 2] - '0') * 1;

	cout << '\n';

	return 0;	
}