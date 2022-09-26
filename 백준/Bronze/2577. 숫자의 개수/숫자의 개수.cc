#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int A, B, C;
	cin >> A >> B >> C;

	vector<int> v(10, 0);
	long long result = A * B * C;

	while (result != 0) {
		v[result % 10]++;
		result /= 10;
	}

	for (auto value : v)
		cout << value << '\n';
	
	return 0;
}