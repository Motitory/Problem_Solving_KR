#include <iostream>
#include <string>

using namespace std;

// 큐 이용
int q[10000];
int front = 0, rear = 0;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	long long int a, b;
	long long int kms = 0;
	int cnt = 0;

	cin >> a >> b;
	
	q[rear++] = 4; q[rear++] = 7;

	while (front != rear) {
		kms = q[front++];		
		if (kms >= a && kms <= b) cnt++;  
		if (kms * 10 + 4 <= b) {
			q[rear++] = kms * 10 + 4;
		}
		if (kms * 10 + 7 <= b) { 
			q[rear++] = kms * 10 + 7;
		}
	}
	cout << cnt << '\n';

	return 0;
}