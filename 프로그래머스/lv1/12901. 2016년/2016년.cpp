#include <string>
#include <vector>

using namespace std;

string day_of_week[7] = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};

string solution(int a, int b) {
    string answer = "";
    int days = b;
    for (int i = 1; i <= a - 1; i++) {
        if (i == 2) days += 29;
        else if (i == 4 || i == 6 || i == 9 || i == 11) days += 30;
        else days += 31;
    }
    answer = day_of_week[days % 7];
    return answer;
}