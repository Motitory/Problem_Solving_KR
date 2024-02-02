#include <iostream>

using namespace std;

int a[1000];	// 수열 A의 값
int d[1000];	// a[i]를 마지막으로 하는 수열의 길이 배열
int v[1000];	// 연결된 인덱스 기록

// 포인터 마냥 경로 기록된걸 따라가서 출력
void go(int p) {
	if (p == -1)
		return ;
	go(v[p]);
	cout << a[p] << ' ';
}

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> a[i];

	for (int i = 0; i < n; i++) {
		d[i] = 1;
		v[i] = -1;
		for (int j = 0; j < i; j++) {
			// 현재 값이 전보다 크고, 전의 길이에 + 1 한 값을 d[i]에 기록
			if (a[i] > a[j] && d[j] + 1 > d[i]) {
				d[i] = d[j] + 1;
				// 연결 경로 기록
				v[i] = j;
			}
		}
	}

	int ans = d[0];
	int p = 0;

	// d[i]의 최대값과 그 때의 인덱스 기록
	for (int i = 0; i < n; i++) {
		if (ans < d[i]) {
			ans = d[i];
			p = i;
		}
	}

	// d[i] 최대값 기록
	cout << ans << '\n';
	// 연결 경로 따라가면서 출력
	go(p);
	cout << '\n';

	return 0;
}