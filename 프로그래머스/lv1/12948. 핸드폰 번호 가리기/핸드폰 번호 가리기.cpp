#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    int cnt = 4;
    for (int i = 0; i < phone_number.length(); i++) {
        if (i < phone_number.length() - 4) answer += "*";
        else answer += phone_number[i];
    }
    return answer;
}