#include <bits/stdc++.h>

using namespace std;

int x, n, a, b, sum;
string result = "Yes";

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> x;
	cin >> n;

	while (n--) {
		cin >> a >> b;
		sum += a * b;
		if (sum > x) {
			result = "No";
			break;
		}
	}

	if (sum != x)
    result = "No";

	cout << result << '\n';

  return 0;
}
