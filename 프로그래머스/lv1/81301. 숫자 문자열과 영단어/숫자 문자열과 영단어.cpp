#include <string>
#include <vector>

using namespace std;

vector<string> v = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int solution(string s) {
    int answer = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= '0' && s[i] <= '9') answer = answer * 10 + (s[i] - '0');
        else {
            for (int j = 0; j < 10; j++) {
                if (v[j][0] == s[i] && v[j][1] == s[i + 1]) {
                    answer = answer * 10 + j;
                    i += v[j].length() - 1;
                }
            }
        }
    }
    return answer;
}