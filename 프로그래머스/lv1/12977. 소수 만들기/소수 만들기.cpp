#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    vector<bool> v(3000 + 1, true);
    v[0] = false, v[1] = false;
    for (int i = 2; i * i <= 3000; i++) {
        if (v[i] == true) {
            for (int j = i * 2; j <= 3000; j += i) {
                v[j] = false;
            }
        }
    }
    for (int i = 0; i < nums.size() - 2; i++) {
        for (int j = i + 1; j < nums.size() - 1; j++) {
            for (int k = j + 1; k < nums.size(); k++) {
                int temp = nums[i] + nums[j] + nums[k];
                if (v[temp] == true) {
                    answer += 1;
                }
            }
                
        }
            
    }
    return answer;
}