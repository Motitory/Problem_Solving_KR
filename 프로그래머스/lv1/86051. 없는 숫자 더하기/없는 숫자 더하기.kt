class Solution {
    fun solution(numbers: IntArray): Int {
        var answer: Int = -1
        for (i in 0..9) {
            for (j in numbers.indices) {
                if (numbers[j] == i)
                    break;
                if (j == numbers.size - 1) {
                    if (answer != -1)
                        answer += i;
                    else
                        answer = i;
                }
            }
        }
        return answer
    }
}