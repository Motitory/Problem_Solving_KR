#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);

	int A, B;
	cin >> A >> B;

	cout << A + B << '\n';
	cout << A - B << '\n';
	cout << A * B << '\n';
	cout << A / B << '\n';
	cout << A % B << '\n';

	return 0;
}