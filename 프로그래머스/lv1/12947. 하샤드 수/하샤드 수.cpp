#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int harsyad = 0;
    int n = x;
    while (n != 0) {
        harsyad += n % 10;
        n /= 10;
    }
    if (x % harsyad) answer = false;
    return answer;
}