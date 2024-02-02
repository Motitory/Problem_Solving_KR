#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string s1 = "";
    string s2 = "";
    for (const auto& i : num_list) {
        if (i % 2 == 1) s1 += to_string(i);
        else s2 += to_string(i);
    }
    answer = stoi(s1) + stoi(s2);
    return answer;
}