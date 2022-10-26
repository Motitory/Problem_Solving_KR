#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	// n번째 계단을 밟을때 최대 점수
	// d[n] = Max(d[n - 2] + a[n], d[n - 3] + a[n - 1] + a[n])

	int n;
	cin >> n;
	int a[n + 1];
	for (int i = 1; i <= n; i++)
		cin >> a[i];

	int d[n + 1];
	d[0] = 0, d[1] = a[1], d[2] = a[1] + a[2];
	d[3] = max(d[1] + a[3], a[2] + a[3]);
	for (int i = 4; i <= n; i++)
		d[i] = max(d[i - 2] + a[i], d[i - 3] + a[i - 1] + a[i]);

	cout << d[n] << '\n';

	return 0;		
}
