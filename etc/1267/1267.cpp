#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, Y = 0, M = 0;
	cin >> N;

	int num;
	while (N--)	{
		cin >> num;
		Y += 10 * (num / 30 + 1);
		M += 15 * (num / 60 + 1);
	}

	if (Y < M)
		cout << "Y " <<  Y << '\n';
	else if (M < Y)
			cout << "M " << M << '\n';
	else cout << "Y M " << Y << '\n';

	return 0;
}