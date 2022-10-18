#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    set<int> s;
    int size = nums.size();
    for (auto i : nums)
        s.insert(i);
    if (s.size() <= size / 2) answer = s.size();
    else answer = size / 2;
    return answer;
}