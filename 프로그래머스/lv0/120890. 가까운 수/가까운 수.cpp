#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    sort(array.begin(), array.end());
    int minIdx = 0;
    int minDistance = 100;
    for (int i = 0; i < array.size(); i++) {
        if (abs(array[i] - n) < minDistance) {
            minDistance = abs(array[i] - n);
            minIdx = i;
        }
    }
    answer = array[minIdx];
    return answer;
}