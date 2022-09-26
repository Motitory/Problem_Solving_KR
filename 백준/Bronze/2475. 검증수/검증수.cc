#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int temp, sum = 0;
	for (int i = 1; i <= 5; i++) {
		cin >> temp;
		sum += (temp * temp);
	}

	int result = sum % 10;

	cout << result << '\n';
	return 0;
}