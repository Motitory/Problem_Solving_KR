#include <iostream>
#include <vector>

using namespace std;

const int MAX = 1000000;
bool check[MAX + 1];

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	vector<int> primes;
	for (int i = 2; i <= MAX; i++) {
		if (!check[i]) {
			primes.push_back(i);
			for (int j = i + i; j <= MAX; j += i)
				check[j] = true;
		}
	}

	int T;
	cin >> T;

	while (T--) {
		int n;
		cin >> n;

		int ans = 0;
		for (int i = 0; i < primes.size(); i++) {
			if (n - primes[i] >= 2 && primes[i] <= n - primes[i]) {
				if (!check[n - primes[i]]) ans += 1;
			} else break;
		}

		cout << ans << '\n';
	}

	return 0;
}