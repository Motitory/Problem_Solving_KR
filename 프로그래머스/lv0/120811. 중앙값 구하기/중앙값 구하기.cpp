#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    vector<int> v = array;
    sort(v.begin(), v.end());
    answer = v[v.size() / 2];
    return answer;
}