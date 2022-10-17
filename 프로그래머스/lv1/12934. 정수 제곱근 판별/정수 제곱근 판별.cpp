#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = -1;
    long long i = 2;
    for (; i * i <= n; i++);
    if ((i - 1) * (i - 1) == n) answer = i * i;
    return answer;
}