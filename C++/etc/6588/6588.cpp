#include <iostream>

using namespace std;

const int MAX = 1000000;
int prime[MAX];
int pn;
bool check[MAX + 1];

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int i;

	for (i = 2; i * i <= MAX; i++) {
		if (check[i] == false) {
			prime[pn++] = i;
			for (int j = i + i; j <= MAX; j += i)
				check[j] = true;
		}
	}

	while (true) {
		int n;
		cin >> n;
		if (n == 0) break;
		for (i = 1; i < pn; i++) {
			if (check[n - prime[i]] == false) {
				cout << n << " = " << prime[i] << " + " << n - prime[i] << '\n';
				break;
			}
		}
		if (i == pn) cout << "Goldbach's conjecture is wrong." << '\n';
	}

	return 0;
}