#include <string>
#include <vector>

using namespace std;

int solution(string before, string after) {
    int answer = 0;
    int check[26] = {0, };
    for (int i = 0; i < before.length(); i++) {
        check[before[i] - 'a'] += 1;
    }
    for (int i = 0; i < after.length(); i++) {
        check[after[i] - 'a'] -= 1;
    }
    answer = 1;
    for (int i = 0; i < 26; i++) {
        if (check[i] != 0) {
            answer = 0;
            break;
        }
    }
    return answer;
}