#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string str;
	getline(cin, str);

	if (str.empty()) {
		cout << '0' << '\n';
		return 0;
	}

	int cnt = 1;
	
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ')
			cnt++;
	}

	if (str[0] == ' ')
		cnt--;
	if (str[str.length() - 1] == ' ')
		cnt--;
	
	cout << cnt << '\n';

	return 0;	
}