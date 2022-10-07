#include <iostream>

using namespace std;

int arr[100001];
int freq[2000001];

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int x;
	cin >> x;
	
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (x > arr[i] && freq[x - arr[i]] == 1) {
			cnt++;
		} else freq[arr[i]] = 1;
	}

	cout << cnt << '\n';

	return 0;
	
}