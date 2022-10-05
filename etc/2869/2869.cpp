#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int A, B, V, length = 0, day = 0;
	cin >> A >> B >> V;

// 3 1 2

	int target = V - A;	

	if (target % (A - B) == 0) day = target / (A - B);
	else day = target / (A - B) + 1;

	day++;
	if (A >= V) cout << 1 << '\n';
	cout << day << '\n';

	return 0;
}