#include <iostream>

using namespace std;

int a[10001];
// d[i] = a[1] ~ a[i]까지 마신 포도주의 최대 양
int d[10001];

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> a[i];

	d[1] = a[1];
	d[2] = a[1] + a[2];
	for (int i = 3; i <= n; i++) {
		// 0번 연속해서 마신 경우 => i번째 마시지 않음.
		d[i] = d[i - 1];
		// 1번 연속해서 마신 경우 => i - 1번째 마시고, i번째 마시지 않음.
		if (d[i] < d[i - 2] + a[i])
			d[i] = d[i - 2] + a[i]; 
		// 2번 연속해서 마신 경우 => i, i - 1번째는 마셨으나, i - 2번째는 마시면 안됨.
		if (d[i] < d[i - 3] + a[i - 1] + a[i])
			d[i] = d[i - 3] + a[i - 1] + a[i];
	}

	cout << d[n] << '\n';

	return 0;
}