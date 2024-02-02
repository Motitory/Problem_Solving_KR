#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);

// 	(A+B)%C는 ((A%C) + (B%C))%C 와 같을까?
// (A×B)%C는 ((A%C) × (B%C))%C 와 같을까?

	int A, B, C;
	cin >> A >> B >> C;

	cout << (A + B)	% C << '\n';
	cout << ((A % C)	+ (B % C)) % C << '\n';
	cout << (A * B)	% C << '\n';
	cout << ((A % C)	* (B % C)) % C << '\n';

	return 0;
}