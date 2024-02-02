#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, s;
	cin >> n >> s;
	int arr[n];
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		arr[i] = abs(temp - s);
	}

	int gcdMax = arr[0];
	for (int i = 1; i < n; i++) {
		gcdMax = gcd(gcdMax, arr[i]);
	}

	cout << gcdMax << '\n';

	return 0;		
}