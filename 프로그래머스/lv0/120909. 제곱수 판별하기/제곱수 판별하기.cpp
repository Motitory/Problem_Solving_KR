#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int i;
    for (i = 1; i * i <= n; ++i)
    answer = i * i == n ? 1 : 2;
    return answer;
}