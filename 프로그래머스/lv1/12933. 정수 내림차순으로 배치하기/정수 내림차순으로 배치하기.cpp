#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    int freq[10];
    for (int i = 0; i < 10; i++)
        freq[i] = 0;
    
    while (n != 0) {
        freq[n % 10]++;
        n /= 10;
    }
    
    for (int i = 9; i >= 0; i--) {
        for (int j = 0; j < freq[i]; j++) {
            answer = answer * 10 + i;
        }
    }
    
    return answer;
}