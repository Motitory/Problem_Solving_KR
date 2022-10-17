#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    // 홀수들의 합인 경우, 합쳐야 할 홀수가 n개이면 n^2
    // 짝수들의 합인 경우, 범위 내의 홀수가 n개일때 짝수는 홀수 + 1
    // 따라서 n^2 + n
    int answer = (n / 2) * (n / 2) + n / 2;
    // for (int i = 2; i <= n; i += 2)
    //     answer += i;
    // 1 ~ n 까지의 합 n * (n + 1) / 2
    return answer;
}