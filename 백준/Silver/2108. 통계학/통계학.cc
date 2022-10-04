#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

vector<int> freq(8001, 0);
vector<int> v;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, num, sum = 0;
	cin >> N;
	int T = N;
	while (T--) {
		cin >> num;

		sum += num;
		v.push_back(num);
		freq[num + 4000]++;
	}
	int avg = round((float)sum / N);
	sort(v.begin(), v.end());

	int mid = v[N / 2];

	bool not_first = false;
	int most = -10000, most_idx = 0;

	for(int i = 0; i < 8001; i++) {
		if (freq[i] == 0)
			continue;
		if (freq[i] == most) {
			if (not_first) {
				most_idx = i;				
				not_first = false;
			}
		}
		if (freq[i] > most) {
			most = freq[i];
			most_idx = i;
			not_first = true;
		}
	}
  
	int range = v[N - 1] - v[0];

	cout << avg << '\n';
	cout << mid << '\n';
	cout << most_idx - 4000 << '\n';
	cout << range << '\n';

	return 0;
}