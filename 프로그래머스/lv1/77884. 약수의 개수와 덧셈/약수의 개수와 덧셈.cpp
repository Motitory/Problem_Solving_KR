#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    bool squareNumber[1001] = {false};
    for (int i = 1; i * i <= 1000; i++)
        squareNumber[i * i] = true;
    for (int i = left; i <= right; i++) {
        if (squareNumber[i]) answer -= i;
        else answer += i;
    }
    return answer;
}