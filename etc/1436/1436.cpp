#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int num = 666, cnt = 0, temp;
	int n;
	cin >> n;

	while (true) {
		temp = num;

		do {
			if (temp % 1000 == 666) {
				cnt++;
				break;
			}
			temp /= 10;
		} while (temp > 100);

		if (cnt == n) {
			cout << num << '\n';
			break;
		}

		num++;
	}
	
	return 0;
}