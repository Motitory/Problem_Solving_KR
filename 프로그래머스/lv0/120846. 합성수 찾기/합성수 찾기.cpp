#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<bool> prime(101);
    fill(prime.begin(), prime.end(), true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= 100; i++) {
        for (int j = 2 * i; j <= 100; j += i)
            prime[j] = false;
    }
    for (int i = 4; i <= n; ++i)
        if (prime[i] == false)
            answer += 1;
    return answer;
}