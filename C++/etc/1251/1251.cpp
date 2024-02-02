#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	string str, result = "{";
	cin >> str;

	for (int i = 0; i < str.length() - 2; i++) {
		for (int j = i + 1; j < str.length() - 1; j++) {
			string temp = "";
			for (int x = i; x >= 0; x--)
				temp += str[x];
			for (int y = j; y > i; y--)
				temp += str[y];
			for (int z = str.length() - 1; z > j; z--)
				temp += str[z];
			if (temp < result) result = temp;
		}
	}

	cout << result << '\n';

	return 0;	
}