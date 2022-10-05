#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, M, B;
	cin >> N >> M >> B;

	int arr[N][M];

	// 입력
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> arr[i][j];
	

	// 시간 비교
	int minTime = 2000000000;
	int Height = 0;

	for (int h = 0; h <= 256; h++) {
		int build = 0;
		int remove = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				int height = arr[i][j] - h;
				if (height > 0) remove += height;
				else build -= height;
			}
		}

		if (build <= remove + B) {
			int time = remove * 2 + build;
			if (time <= minTime) {
				minTime = time;
				Height = h;
			}
		}
	}

	cout << minTime << " " << Height << '\n';

	return 0;
}