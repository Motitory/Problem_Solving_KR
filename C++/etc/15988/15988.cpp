#include <iostream>

using namespace std;

long long mod = 1000000009LL;

long long d[1000001];

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	d[0] = 1;
	for (int i = 1; i <= 1000000; i++) {
		if (i - 1 >= 0)
			d[i] += d[i - 1];
		if (i - 2 >= 0)
			d[i] += d[i - 2];
		if (i - 3 >= 0)
			d[i] += d[i - 3];
		d[i] %= mod;
	}

	int T;
	cin >> T;

	while (T--)	{
		int n;
		cin >> n;
		cout << d[n] << '\n';
	}

	return 0;
}