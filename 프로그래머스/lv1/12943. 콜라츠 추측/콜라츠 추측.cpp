#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long n = num;
    if (num != 1) {
        int i;
        for (i = 0; i < 500; i++) {
            if (n % 2 == 0) n /= 2;
            else n = n * 3 + 1;
            
            if (n == 1) 
                break;
        }
        if (i < 500) answer = i + 1;
        else answer = -1;
    }
    
    return answer;
}