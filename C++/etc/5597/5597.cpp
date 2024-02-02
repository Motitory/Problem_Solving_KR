#include <bits/stdc++.h>

using namespace std;

int arr[31], temp;

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	for (int i = 0; i < 28; i++) {
		cin >> temp;
		arr[temp] = 1;
	}

	for (int i = 1; i <= 30; i++)
		if (arr[i] == 0) cout << i << '\n';

	return 0;
}