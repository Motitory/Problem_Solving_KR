using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    long long required = price * (long long) {count * (count + 1) / 2};
    if (money < required) answer = required - money;
    return answer;
}