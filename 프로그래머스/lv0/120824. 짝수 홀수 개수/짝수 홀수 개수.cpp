#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int odd_cnt = 0;
    int even_cnt = 0;
    for (auto i : num_list) {
        if (i % 2 == 1) odd_cnt += 1;
        else even_cnt += 1;
    }
    answer.push_back(even_cnt);
    answer.push_back(odd_cnt);
    return answer;
}