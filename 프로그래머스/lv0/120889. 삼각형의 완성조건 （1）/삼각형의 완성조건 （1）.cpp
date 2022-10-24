#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int max_val = *max_element(sides.begin(), sides.end());
    bool possible = false;
    int sum = 0;
    for (auto i : sides)
        sum += i;
    sum -= max_val;
    if (max_val < sum) possible = true;
    answer = possible ? 1 : 2;
    return answer;
}