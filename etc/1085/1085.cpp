#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int w, h, x, y;
	cin >> x >> y >> w >> h;

	int min_val1 = min(x, y);
	int min_val2 = min(w - x, h - y);
	cout << min(min_val1, min_val2) << '\n';

	return 0;
}