#include <bits/stdc++.h>

using namespace std;

int n, m, k, c;
int arr[1004];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m >> k;
	for (int i = 1; i <= n; i++)
    arr[i] = i;

	if (n / m == 0) {
		for (int a = 0; a < k; a++) {
			vector<vector<int>> v;
			// 분할해서 벡터에
			for (int i = 0; i < n / m; i++) {
				vector<int> t;
				for (int j = 1; j <= m; j++) {
					t.push_back(arr[i * m + j]);		
				}
				v.push_back(t);
			}
			// 벡터 위치 변경
			for (int j = 0; j < (n / m) / 2; j++) {
				swap(v[j], v[(n / m - 1) - j]);
			}
			// 벡터를 다시 배열로
			for (int j = 0; j < v.size(); j++) {
				for (int l = 1; l <= v[j].size(); l++) {
					arr[j * m + l] = v[j][l - 1];
				}
			}
		}
	} else {
		for  (int a = 0; a < k; a++) {
			vector<vector<int>> v;
			// 분할 -> 벡터
			for (int i = 0; i < n / m; i++) {
				vector<int> t;
				for (int j = 1; j <= m; j++) {
					t.push_back(arr[i * m + j]);
				}
				v.push_back(t);
			}
			vector<int> temp;
			for (int j = 0; j < n % m; j++) {
				temp.push_back(arr[n / m * m + j + 1]);
			}
			v.push_back(temp);
			// 벡터 위치 변경
			for (int j = 0; j < v.size() / 2; j++) {
				swap(v[j], v[(v.size() - 1) - j]);
			}
			// 벡터를 다시 배열로
			int x = 0;
			for (int j = 0; j < v.size(); j++) {
				for (int l = 0; l < v[j].size(); l++) {
					arr[++x] = v[j][l];
				}
			}
		}
	}
	

	for (int i = 1; i <= n; i++)
		cout << arr[i] << '\n';

	return 0;
}