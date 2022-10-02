#include <iostream>

using namespace std;

int Factorial(int X) {
	if (X == 0) return 1;
	
	int result = 1;

	for (int i = X; i >= 1; i--) {
		result *= i;
	}

	return result;
}

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, K;
	cin >> N >> K;

	// 5C2 = 5! / (2! * (5-2)!)
	
	cout << Factorial(N) / (Factorial(K) * Factorial(N - K)) << '\n';

	return 0;
}