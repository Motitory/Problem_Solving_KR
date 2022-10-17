#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    for (int i = (s.length() - 1) / 2; i <= s.length() / 2; i++)
        answer += s[i];
    return answer;
}