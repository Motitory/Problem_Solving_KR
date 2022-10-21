#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            answer.push_back(i);
            answer.push_back(n / i);
        }
    }
    answer.erase(unique(answer.begin(), answer.end()), answer.end());
    sort(answer.begin(), answer.end());
    return answer;
}