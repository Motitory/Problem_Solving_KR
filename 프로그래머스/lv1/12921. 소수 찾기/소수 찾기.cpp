#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> prime(n + 1, 1);
    prime[0] = 0, prime[1] = 0;
    for (int i = 2; i <= n; i++) {
        if (prime[i] == 1) {
            answer += 1;
            for (int j = i * 2; j <= n; j += i)
                prime[j] = 0;
        }
    }
    return answer;
}