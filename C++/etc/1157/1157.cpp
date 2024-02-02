#include <iostream>

using namespace std;

int freq[26 + 1], cnt = 0;
string str;

//아스키코드 : 대문자 65~90, 소문자 97~122

int main() {
    cin >> str;

    //빈도수 체킹
    for (int i = 0; i < str.length();i++) {
        if (str[i] < 97) freq[str[i] - 64]++; //대문자
        else freq[str[i] - 96]++; //소문자
    }

    int max = 0, max_Idx = 0;

    for (int i = 1; i <= 26; i++) {
        if (max < freq[i]) {
            max = freq[i];
            max_Idx = i;
        }
    }
    //가장 많이 사용된 알파벳이 여러개인가?
    for (int i = 1; i <= 26; i++) {
        if (max == freq[i]) cnt++;
    }
    //여러개라면 ? 출력, 아니라면 대문자로 출력
    if (cnt > 1) cout << "?" << '\n';
    else cout << (char) (max_Idx + 64) << '\n';
}
