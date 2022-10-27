#include <iostream>
#include <algorithm>

using namespace std;

int d[50001];

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n;
	cin >> n;

	d[1] = 1;
	for (int i = 2; i <= n; i++) {
		d[i] = d[i - 1] + 1;
		for (int j = 1; j * j <= i; j++) {
			d[i] = min(d[i], d[i - j * j] + 1);
		}
	}
	
	cout << d[n] << '\n';
	
	return 0;
}