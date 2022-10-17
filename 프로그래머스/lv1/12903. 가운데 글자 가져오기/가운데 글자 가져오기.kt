class Solution {
    fun solution(s: String): String {
        var answer = ""
        val length = s.length
        if (length % 2 == 1)
            answer += s[length / 2]
        else {
            answer += s[length / 2 - 1]
            answer += s[length / 2]
        }
        return answer
    }
}