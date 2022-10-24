#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool checked[6][6];

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	bool possible = true;
	string str;
	cin >> str;
	checked[str[1] - '1'][str[0] - 'A'] = true;
	int first = str[1] - '1';
	int second = str[0] - 'A'; 
	int lastFirst = str[1] - '1';
	int lastSecond = str[0] - 'A';
	int n = 35;
	while (n--) {
		cin >> str;
		if (possible) {
			if (checked[str[1] - '1'][str[0] - 'A'])
				possible = false;
			else {
				if ((abs((str[1] - '1') - lastFirst) == 1 && abs((str[0] - 'A') - lastSecond) == 2) || (abs((str[1] - '1') - lastFirst) == 2 && abs((str[0] - 'A') - lastSecond) == 1)) {
					checked[str[1] - '1'][str[0] - 'A'] = true;
					lastFirst = str[1] - '1';
					lastSecond = str[0] - 'A';
				}
				else
					possible = false;
			}
		}
	}
	if (!((abs((str[1] - '1') - first) == 1 && abs((str[0] - 'A') - second) == 2) || (abs((str[1] - '1') - first) == 2 && abs((str[0] - 'A') - second) == 1)))
		possible = false;
	string answer = possible ? "Valid" : "Invalid"; 
	cout << answer << '\n';		
}