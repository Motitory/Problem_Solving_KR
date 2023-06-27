#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int sum = 0;
    int multiple = 1;
    for (auto &num : num_list) {
        multiple *= num;
        sum += num;
    }
    if (multiple < sum * sum)
        answer = 1;
    return answer;
}