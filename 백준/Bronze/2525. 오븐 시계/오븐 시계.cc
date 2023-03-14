#include <bits/stdc++.h>

using namespace std;

int a, b, c, x, y;

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);


	cin >> a >> b >> c;

	y = b + c;
	while (y >= 60) {
		a += 1;
		y -= 60;
	}
	
	x = a;
	if (x >= 24) x -= 24;

	cout << x << " " << y << '\n';
	return 0;
}