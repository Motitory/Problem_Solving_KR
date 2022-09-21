#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;	
	cin >> n;

	vector<int> v(n + 1, 0);
	v[1] = 1;

	for (int i = 2; i <= n; i++) {
		v[i] = v[i - 1] + v[i - 2];
	}
	
	cout << v[n] << '\n';
	return 0;
}