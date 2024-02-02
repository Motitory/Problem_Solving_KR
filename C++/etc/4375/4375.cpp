#include <bits/stdc++.h>

using namespace std; 

int n;

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	while (scanf("%d", &n) != EOF) {
		int x = 1, ret = 1;
		while (true) {
			if (x % n == 0) {
				printf("%d\n", ret);
				break;
			} else {
				x = x * 10 + 1;
				x %= n;
				ret++;
			}
		}
	}
}