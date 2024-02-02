#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	long long N;
	cin >> N;

	long long sum = 1;
	int cycle = 1;	

	for (int i = 1; sum < N; i++) {
		sum += 6 * i;
		cycle = i + 1;
	}

	cout << cycle << '\n';

	return 0;	
}