#include <iostream>
#include <string>

using namespace std;

int n, r1, c1, r2, c2;
int ans1, ans2;
bool arr1[201][201], arr2[201][201];
bool finished1, finished2;
string str;

int main() {
	cin >> n;
	cin >> r1 >> c1;
	cin >> r2 >> c2;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> str;
			int cnt = stoi(str);
			char direction = str.back();

			for (int k = 0; !finished1 && k < cnt; k++) {
        if (direction == 'L') {
          c1 -= 1;
          if (c1 <= 0) {
              c1 += n;
          }
        } else if (direction == 'R') {
          c1 += 1;
          if (c1 > n) {
              c1 -= n;
          }
        } else if (direction == 'U') {
          r1 -= 1;
          if (r1 <= 0) {
            r1 += n;
          }
        } else {
          r1 += 1;
          if (r1 > n) {
            r1 -= n;
          }
        }
        
        if (arr1[r1][c1]) {
          finished1 = true;
        } else {
          arr1[r1][c1] = true;
          ans1 += 1;
        }
			}
			
			for (int k = 0; !finished2 && k < cnt; k++) {
        if (direction == 'L') {
          c2 -= 1;
          if (c2 <= 0) {
              c2 += n;
          }
        } else if (direction == 'R') {
          c2 += 1;
          if (c2 > n) {
              c2 -= n;
          }
        } else if (direction == 'U') {
          r2 -= 1;
          if (r2 <= 0) {
            r2 += n;
          }
        } else {
          r2 += 1;
          if (r2 > n) {
            r2 -= n;
          }
        }
        
        if (arr1[r2][c2]) {
          finished2 = true;
        } else {
          arr2[r2][c2] = true;
          ans2 += 1;
        }
			}	
		}
	}
	
	if (ans1 > ans2) {
		cout << "goorm" << " " << ans1;
	} else {
		cout << "player" << " " << ans2;
	}
	
	
	return 0;
}