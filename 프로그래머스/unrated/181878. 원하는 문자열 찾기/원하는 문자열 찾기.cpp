#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    for (int i = 0; i < myString.size(); i++)
        myString[i] = tolower(myString[i]);
    
    for (int i = 0; i < pat.size(); i++)
        pat[i] = tolower(pat[i]);
    
    for (int i = 0; i < myString.size(); i++)
        if (myString[i] == pat[0]) {
            int j = 1;
            for (; j < pat.size(); j++)
                if (myString[i + j] != pat[j])
                    break;
            if (j == pat.size()) {
                answer = 1;
                break;
            }
        }
            
    return answer;
}