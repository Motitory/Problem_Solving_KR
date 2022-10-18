#include <string>
#include <cmath>

using namespace std;

int score[3];

int solution(string dartResult) {
    int answer = 0;
    int idx = 0;
    for (int i = 0; i < 3; i++) {
        // 1. 점수
        if (dartResult[idx] == '1' && dartResult[idx + 1] == '0') {
            score[i] = 10;
            idx += 2;
        } else {
            score[i] = dartResult[idx] - '0';
            idx++;
        }
        
        // 2. 보너스
        if (dartResult[idx] == 'D')
            score[i] = pow(score[i], 2);
        else if (dartResult[idx] == 'T')
            score[i] = pow(score[i], 3);
        idx++;
        
        // 3. 옵션
        if (dartResult[idx] == '*') {
            if (i != 0) score[i - 1] *= 2;
            score[i] *= 2;
            idx++;
        } else if (dartResult[idx] == '#') {
            score[i] *= -1;
            idx++;
        }            
    }
    
    for (auto i : score)
        answer += i;
    
    return answer;
}