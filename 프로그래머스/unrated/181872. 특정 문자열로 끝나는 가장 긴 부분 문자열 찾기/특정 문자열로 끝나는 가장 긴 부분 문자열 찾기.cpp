#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    reverse(myString.begin(), myString.end());
    reverse(pat.begin(), pat.end());
    int idx = myString.find(pat);
    for (int i = idx; i < myString.length(); i++)
        answer += myString[i];
    reverse(answer.begin(), answer.end());
    return answer;
}