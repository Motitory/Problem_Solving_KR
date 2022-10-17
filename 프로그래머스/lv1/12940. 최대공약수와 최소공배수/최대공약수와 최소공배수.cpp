#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int x, y, r;
    x = n, y = m;
    while (y != 0) {
        r = x % y;
        x = y;
        y = r;
    }
    int gcd = x;
    int lcm = n * m / gcd;
    answer.push_back(gcd);
    answer.push_back(lcm);
    return answer;
}