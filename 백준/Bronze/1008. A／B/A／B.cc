#include <iostream>

using namespace std;

int main(int argc, char* const argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	double A, B;
	cin >> A >> B;
	
	// precision과 fixed(부동소수점)
	cout.precision(11);
	cout << fixed;
	cout << A / B << '\n';

	return 0;
}