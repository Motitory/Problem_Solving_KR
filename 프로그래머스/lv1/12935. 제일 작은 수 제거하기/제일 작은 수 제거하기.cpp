#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int minValue = *min_element(arr.begin(), arr.end());
    if (arr.size() == 1) answer.push_back(arr[0]);
    else {
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] != minValue) answer.push_back(arr[i]);
        }    
    }
    if (answer.size() == 1 && answer.front() == 10) answer[0] = -1;
    return answer;
}