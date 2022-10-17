class Solution {
    fun solution(price: Int, money: Int, count: Int): Long {
        val answer: Long = money-((count*(count+1))/2).toLong()*price.toLong()
        return if(answer>0)0 else -1*answer
    }
}