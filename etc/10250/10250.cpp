#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T, H, W, N;
	cin >> T;

	for (int i = 1; i <= T; i++)
	{
		cin >> H >> W >> N;
		int result = 0;	

		if (N % H == 0) result = H * 100 + (N / H);
		else result = (N % H) * 100 + (N / H) + 1;
		
		cout << result << '\n';
	}

	return 0;	
}