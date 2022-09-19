#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	while (true) {
		cin >> n;
		if (n == -1) break;

		int sum = 0;
		vector<int> v;
		for (int i = 1; i <= n - 1; i++) {
			if (n % i == 0) {
				sum += i;
				v.push_back(i);
			}
		}

		if (sum == n) {
			cout << n << " = ";
			for (int i = 0; i < v.size() - 1; i++) {
				cout << v[i] << " + ";
			}
			cout << v.back() << "\n";
		} else {
			cout << n << " is NOT perfect." << endl;
		}
	}

	return 0;
}