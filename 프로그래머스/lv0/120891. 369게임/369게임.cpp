#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    while (order > 0) {
        int last_number = order % 10;
        if (last_number == 3 || last_number == 6 || last_number == 9)
            answer++;
        order /= 10;
    }
    return answer;
}