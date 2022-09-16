#include <iostream>

using namespace std;

int main(int argc, char* argn[]) {
	string day[] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	int date[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	int x, y;
	int total = 0;
	cin >> x >> y;

	for (int i = 0; i < x - 1; i++) {
		total += date[i];
	}

	total += y;

	cout << day[total % 7] << "\n";

	return 0;
}