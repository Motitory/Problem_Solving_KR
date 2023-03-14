#include <iostream>
#include <queue>
// #include <vector>
// #include <utility>
#include <algorithm>
// #include <bits/stdc++.h>

using namespace std;

int n, h, w, p, q, x, y;
int a[104][104];
int visited[104][104];
int dy[4] = {1, 0, -1, 0};
int dx[4] = {0, 1, 0, -1};
int min_val = 1000;

int main(void){
    cin >> n >> h >> w >> p >> q;
    a[p][q] = 1;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        a[x][y] = 1;
    }
    
    queue<pair<int, int>> que;
    visited[p][q] = 1;
    que.push({p, q});
    
    while (que.size()) {
        tie(y, x) = que.front(); que.pop();
        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (ny < 0 || ny >= h || nx < 0 || nx >= w) continue;
            if (visited[ny][nx]) continue;
            visited[ny][nx] = visited[y][x] + 1;
            if (a[ny][nx] != 1) {
                min_val = min(min_val, visited[ny][nx]);
            }
            que.push({ny, nx});
        }
    }
    
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (visited[i][j] == min_val) {
                cout << i << " " << j << '\n';
            }
        }
    }
    return 0;
}