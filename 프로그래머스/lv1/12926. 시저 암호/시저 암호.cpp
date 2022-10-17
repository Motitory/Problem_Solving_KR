#include <string>
#include <vector>

using namespace std;

string alpha = "abcdefghijklmnopqrstuvwxyz";

string solution(string s, int n) {
    string answer = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') answer += ' ';
        else {
            if (s[i] - 'a' >= 0 && s[i] - 'a' < 26) answer += (s[i] - 'a' + n) % 26 + 'a';
            else answer += (s[i] - 'A' + n) % 26 + 'A';
        }
    }
    return answer;
}