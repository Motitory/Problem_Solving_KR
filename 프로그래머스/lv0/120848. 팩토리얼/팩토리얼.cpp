#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> fac;
    fac.push_back(1);
    for (int i = 2; i <= 10; i++)
        fac.push_back(fac[i - 2] * i);
    for (int i = 0; i < fac.size(); i++) {
        if (fac[i] == n) {
            answer = i + 1;
            break;
        }
        else if (fac[i] > n) {
            answer = i;
            break;
        }
    }
    return answer;
}