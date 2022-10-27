#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = -1;
    int length = 0;
    while (num != 0) {
        if (num % 10 == k) answer = length;
        num /= 10;
        length++;
    }
    if (answer != -1) answer = length - answer;
    return answer;
}