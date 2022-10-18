#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool cmp(pair<double, int> a, pair<double, int> b) {
    if (a.first == b.first) return a.second < b.second;
    else return a.first > b.first;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<double, int>> per;
    map<int, double> m;
    int size = stages.size();
    
    // i스테이지에 있는 멤버 수 기록
    for (int i = 0; i < size; i++)
        // key = 스테이지번호, value 멤버수
        m[stages[i]]++;
    
    // 실패율 기록
    double failCount = 0;
    for (int i = 1; i <= N; i++) {
        if (m[i] == 0) {
            per.push_back({0, i});
            continue;
        }
        per.push_back({m[i] / (size - failCount), i});
        failCount += m[i];
    }
    
    // 실패율에 따른 정렬
    sort(per.begin(), per.end(), cmp);
    
    // 스테이지 번호 answer에 넣기
    for (auto i : per)
        answer.push_back(i.second);
    
    return answer;
}