#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    bool minus = false;
    bool sign = false;
    if (s[0] == '+' || s[0] == '-') {
        sign = true;
        if (s[0] == '-') minus = true;
    }
    int start = 0;
    if (sign) start = 1;
    for (int i = start; i < s.length(); i++) {
        answer = answer * 10 + (s[i] - '0');
    }
    if (minus) answer *= -1;
    return answer;
}