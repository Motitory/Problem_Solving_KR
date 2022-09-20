#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int A, B;
	cin >> A >> B;

	if (A > B) {
		cout << ">" << "\n";
	} else if (B > A) {
		cout << "<" << "\n";
	} else {
		cout << "==" << '\n';
	}
	
	return 0;
}