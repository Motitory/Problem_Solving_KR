#include <string>
#include <vector>

using namespace std;

vector<bool> selected(46);

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int zero_cnt = 0;
    int miss_num = 0;
    int cnt = 0;
    for (auto i : lottos) {
        if (i == 0) zero_cnt += 1;
        else selected[i] = true;
    }
    
    for (auto i : win_nums) {
        if (selected[i]) cnt += 1;
        else miss_num += 1;
    }
    
    int min = cnt >= 2 ? 7 - cnt : 6;
    
    if (miss_num <= zero_cnt) cnt += miss_num;
    else cnt += zero_cnt;

    int max = cnt >= 2 ? 7 - cnt : 6;
    
    answer.push_back(max);
    answer.push_back(min);
    
    return answer;
}