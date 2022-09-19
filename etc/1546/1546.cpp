#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, score;
	vector<double> v; 
	double total = 0;
	cin >> N;

	// 입력
	for (int i = 1; i <= N; i++) {
		cin >> score;
		v.push_back(score);
	}

	// 최대값 구하기
	int max = *max_element(v.begin(), v.end());

	// 최대값들 빼고 전부 값 변경, total 구하기
	for (int i = 0; i < v.size(); i++) {
			total += v[i] / max * 100;
	}

	cout.precision(8);
	cout << fixed;

	double average = total / N;

	cout << average << '\n';

	return 0;
}