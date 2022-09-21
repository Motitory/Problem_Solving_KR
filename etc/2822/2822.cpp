#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	vector<int> one(9, 0);
	vector<int> two(9, 0);
	vector<int> idx(6, 0);

	int temp, sum = 0;

	for (int i = 1; i <= 8; i++) {
		cin >> one[i];
		two[i] = one[i];
	}

	for (int i = 1; i <= 7; i++) {
		for (int j = i + 1; j <= 8; j++) {
			if (two[i] < two[j]) {
				temp = two[i];
				two[i] = two[j];
				two[j] = temp;
			}
		}
	}

	int k = 1;
	for (int i = 1; i <= 8; i++) {
		for (int j = 1; j <= 5; j++) {
			if (one[i] == two[j]) {
				sum += one[i];
				idx[k++] = i;
			}
		}
	}

	cout << sum << '\n';
	for (int i = 1; i <= 4; i++)
		cout << idx[i] << ' ';
	cout << idx[5] << '\n';
	
	return 0;
}