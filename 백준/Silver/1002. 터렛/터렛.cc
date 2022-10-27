#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n;
	cin >> n;

	while (n--) {
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		// 두 점의 거리
		double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
		// 무한대일때
		if (x1 == x2 && y1 == y2 && r1 == r2)	cout << -1 << '\n';
		// 작은 원이 큰 원에 포함될 때 와 두 점이 서로 밖에 있을때
		else if (distance < abs(r1 - r2) || distance > r1 + r2) cout << 0 << '\n';
		// 외접할때 와 내접할 때
		else if (distance == r1 + r2 || distance == abs(r1 - r2)) cout << 1 << '\n';
		// 그 외는 점 2개로 접함
		else cout << 2 << '\n';
	}

	return 0;
}