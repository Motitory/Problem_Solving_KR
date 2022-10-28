#include <iostream>
#include <climits>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	for (int i = 0; i < 3; i++) {
		int t;
		cin >> t;
		// 오버플로우, 언더플로우 횟수로 판단
		int overflow = 0;
		long long sum = 0;
		for (int j = 0; j < t; j++) {
			long long num;
			cin >> num;
			// x + y > max => x > max - y
			if (sum > 0 && num > 0 && sum > LLONG_MAX - num)
				++overflow;
			// x + y < min => x < min - y
			else if (sum < 0 && num < 0 && sum < LLONG_MIN - num) 
				--overflow;
			sum += num;
		}
		char result;
		if (overflow > 0) result = '+';
		else if (overflow < 0) result = '-';
		else if (sum > 0) result = '+';
		else if (sum == 0) result = '0';
		else result = '-';
		
		cout << result << '\n';
	}

	return 0;
}