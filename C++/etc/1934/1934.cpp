#include <iostream>

using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int T;
	cin >> T;

	while (T--)	{
		int n, m;
		cin >> n >> m;
		int gcdValue = gcd(n, m);
		int lcmValue = n * m / gcdValue;
		cout << lcmValue << '\n';
	}

	return 0;
}