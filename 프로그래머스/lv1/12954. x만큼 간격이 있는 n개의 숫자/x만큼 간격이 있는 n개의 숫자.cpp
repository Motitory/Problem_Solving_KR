#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    int cnt = n;
    for (long long i = x; cnt > 0; i += x) {
        answer.push_back(i);
        cnt--;
    }
    return answer;
}