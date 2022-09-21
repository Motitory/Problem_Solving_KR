#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string n;
	cin >> n;

	char temp;

	for (int i = 1; i <= n.length() - 1; i++) {
		for (int j = i + 1; j <= n.length(); j++) {
			if (n[i - 1] < n[j - 1]) {
				temp = n[i - 1];
				n[i - 1] = n[j - 1];
				n[j - 1] = temp;
			}
		}
	}

	cout << n << '\n';

	return 0;
}