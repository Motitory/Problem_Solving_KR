#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int A, B, C;
	cin >> A >> B >> C;

	int temp, result;

	if (A >= B) {
		if (B >= C) result = B;	// A B C
		else if (C >= A) result = A;	// C A B
		else result = C; // A C B		
	} else if (A >= C) { // B A C
		result = A;
	} else if (C >= B) { // C B A
		result = B;
	} else { // B  C A
		result = C;
	}

	cout << result << '\n';

	return 0;
}