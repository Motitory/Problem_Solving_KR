#include <iostream>

using namespace std;

int fibo(int num) {
	if (num == 0) return 0;
	if (num == 1) return 1;
	return fibo(num - 1) + fibo(num - 2);
}

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int num;
	cin >> num;
	cout << fibo(num) << '\n';
}