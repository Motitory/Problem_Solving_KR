#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

//	(세 자리 수) × (세 자리 수)는 다음과 같은 과정을 통하여 이루어진다.
//	(1)과 (2)위치에 들어갈 세 자리 자연수가 주어질 때 (3), (4), (5), (6)위치에 들어갈 값을 구하는 프로그램을 작성하시오.
	int A, B;
	cin >> A >> B;

	cout << A * (B % 10) << '\n';
	cout << A * ((B % 100) / 10) << '\n';
	cout << A * (B / 100) << '\n';
	cout << A * B << '\n';

	return 0;
}