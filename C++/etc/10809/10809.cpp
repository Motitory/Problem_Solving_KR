#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string str;
	string alphabet = "abcdefghijklmnopqrstuvwxyz";

	cin >> str;

	for (int i = 0; i < alphabet.length(); i++)
		cout << (int)str.find(alphabet[i]) << " ";

	return 0;
}