#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    bool find = false;
    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] == str2[0]) {
            int n = 1;
            while (n < str2.length()) {
                if (str1[i + n] == str2[n]) n++;
                else break;
            }
            if (n == str2.length()) {
                find = true;
                break;
            }
        }
    }
    answer = find ? 1 : 2;
    return answer;
}