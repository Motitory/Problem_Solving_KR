#include <iostream>

using namespace std;

int arr[201];

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;
	cin >> N;

	while (N--) {
		int temp;
		cin >> temp;
		arr[temp + 100]++;
	}

	int v;
	cin >> v;

	cout << arr[v + 100] << '\n';

	return 0;
}