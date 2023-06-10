#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    int length = my_string.length();
    for (int i = length - n; i < length; i++) {
        answer += my_string[i];
    }
    return answer;
}