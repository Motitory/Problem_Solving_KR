#include <iostream>

using namespace std;

void changeMinusTwo(int n) {
	if (n == 0) return;
	if (n % 2 == 0) {
		changeMinusTwo(-(n / 2));
		cout << "0";
	} else {
		if (n > 0)
			changeMinusTwo(-(n / 2));
		else
			changeMinusTwo((-n + 1) / 2);
		cout << "1";
	}
}

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n;
	cin >> n;
	if (n == 0) cout << "0" << '\n';
	else changeMinusTwo(n);

	return 0;
}