#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> b = {1, 3, 4, 5};
    vector<int> c = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    int aCnt, bCnt, cCnt;
    aCnt = bCnt = cCnt = 0;
    for (int i = 0; i < answers.size(); i++) {
        if (answers[i] == (i % 5 + 1)) aCnt++;
        if (i % 2 == 0) {
            if (answers[i] == 2) bCnt++;
        } else {
            if (answers[i] == b[(i / 2) % 4]) bCnt++;
        }
        if (answers[i] == c[i % 10]) cCnt++;
    }
    if (aCnt == bCnt && bCnt == cCnt) {
        for (int i = 1; i <= 3; i++) {
            answer.push_back(i);
        }
    } else if (aCnt == bCnt && bCnt > cCnt) {
        answer.push_back(1);
        answer.push_back(2);
    } else if (aCnt == cCnt && cCnt > bCnt) {
        answer.push_back(1);
        answer.push_back(3);
    } else if (bCnt == cCnt && cCnt > aCnt) {
        answer.push_back(2);
        answer.push_back(3);
    } else {
        if (aCnt > bCnt && aCnt > cCnt) answer.push_back(1);
        else if (bCnt > aCnt && bCnt > cCnt) answer.push_back(2);
        else if (cCnt > aCnt && cCnt > bCnt) answer.push_back(3);
    }
    return answer;
}