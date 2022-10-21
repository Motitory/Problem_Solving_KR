#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for (int i = 0; i < my_string.length(); i++)
        answer = my_string[i] + answer;
    return answer;
}