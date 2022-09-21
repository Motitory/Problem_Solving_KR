#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int M, N, sum = 0;
	int min = 10001;
	cin >> M >> N;

	vector<int> v(N + 1, 1);
	v[0] = v[1] = 0;

	for (int i = 2; i <= v.size(); i++) {
		if (v[i] == 1)
			for (int j = i * i; j <= N; j += i)
				v[j] = 0;
	}

	for (int i = M; i <= N; i++) {
		if (v[i] == 1) {
			sum += i;
			if (i < min)
				min = i;
		}
	}

	if (sum == 0) cout << "-1" << '\n';
	else cout << sum << '\n' << min << '\n';
	
	return 0;
}