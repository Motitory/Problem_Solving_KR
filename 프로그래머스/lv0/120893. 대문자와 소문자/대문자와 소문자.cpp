#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for (int i = 0; i < my_string.length(); i++) {
        if (my_string[i] - 'A' > 26) answer += toupper(my_string[i]);
        else answer += tolower(my_string[i]);
    }
    return answer;
}