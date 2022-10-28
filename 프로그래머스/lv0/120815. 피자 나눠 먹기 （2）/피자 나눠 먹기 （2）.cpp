#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int x, y, r;
    x = n, y = 6;
    while (y != 0) {
        r = x % y;
        x = y;
        y = r;
    }
    int gcd = x;
    int lcm = n * 6 / gcd;
    answer = lcm / 6;
    return answer;
}