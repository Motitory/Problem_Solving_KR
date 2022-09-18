#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argn[]) {
	string str;
	getline(cin, str);

	for (int i = 1; i <= str.size(); i++) {
		cout << str[i - 1];
		if (i % 10 == 0) {
			cout << "\n";
		}
	}
	cout << "\n";

	return 0;
}