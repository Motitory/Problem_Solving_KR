#include <iostream>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

int main(int argc, char* argn[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	string str;
	cin >> str;

	int n = str.size();

	int min = 26;
	int minIdx = n;
	// 첫번째 나눔 찾기
	for (int i = 0; i < n - 2; i++) {
		if (str[i] - 'a' <= min) {
			min = str[i] - 'a';
			minIdx = i;
		} 
	}
	
	int firstCutIdx = minIdx;
	stack<char> s;
	for (int i = 0; i <= firstCutIdx; i++)
		s.push(str[i]);
	
	for (int i = 0; i <= firstCutIdx; i++) {
		cout << s.top();
		s.pop();
	}

	min = 26;
	minIdx = n;
	// 두번째 나눔 찾기
	for (int i = firstCutIdx + 1; i < n - 1; i++) {
		if (str[i] - 'a' <= min) {
			min = str[i] - 'a';
			minIdx = i;
		} 	
	}
	int secondCutIdx = minIdx;
	for (int i = firstCutIdx + 1; i <= secondCutIdx; i++)
		s.push(str[i]);
	
	for (int i = firstCutIdx + 1; i <= secondCutIdx; i++) {
		cout << s.top();
		s.pop();
	}

	for (int i = secondCutIdx + 1; i < n; i++)
		s.push(str[i]);

	for (int i = secondCutIdx + 1; i < n; i++) {
		cout << s.top();
		s.pop();
	}
	
	cout << '\n';

	return 0;	
}