#include <iostream>
#include <string>

using namespace std;

string str;
int lower, upper, number, space;

int main() {
	while (getline(cin, str)) {
		lower = upper = number = space = 0;
		for (char ch : str) {
			if (ch >= 'a' && ch <= 'z') lower++;
			else if (ch >= 'A' && ch <= 'Z') upper++;
			else if (ch >= '0' && ch <= '9') number++;
			else if (ch == ' ') space++;
		}
		cout << lower << ' ' << upper << ' ' << number << ' ' << space << '\n';
	}

	return 0;
}