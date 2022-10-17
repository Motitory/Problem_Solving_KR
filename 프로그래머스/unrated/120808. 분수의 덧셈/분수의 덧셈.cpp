#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int denum1, int num1, int denum2, int num2) {
    vector<int> answer;
    int numX = num1 * num2;
    int denumX = denum1 * num2 + denum2 * num1;
    int minValue = min(numX, denumX);
    int temp = 1;
    for (int i = 2; i <= minValue; i++) {
        if (numX % i == 0 && denumX % i == 0) temp = i;
    }
    answer.push_back(denumX / temp);
    answer.push_back(numX / temp);
    return answer;
}