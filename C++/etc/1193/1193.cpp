#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int x, line = 1;
	cin >> x;

	// 몇 번째 라인인가?	
	while ((line * (line + 1) / 2) < x) {
		line++;
	}

	// 해당 라인에서 몇번째인가??
	int idx = x - ((line - 1) * line / 2);

	// 해당 라인이 홀수번째 라인이면 line에서 감소 (라인 분자, 분모 총합은 line + 1)
	if (line % 2) {
		cout << line + 1 - idx << "/" << idx << '\n';
	// 해당 라인이 짝수번째 라인이면 1에서 증가
	} else {
		cout << idx << "/" << line + 1 - idx << '\n';
	}

	return 0;

}