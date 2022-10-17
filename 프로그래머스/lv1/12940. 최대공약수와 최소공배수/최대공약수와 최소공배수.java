class Solution {
    public int[] solution(int n, int m) {
               
        int r, gcd, lcm;
        int temp1 = n,  temp2 = m;
                
        if(n < m){
            temp1 = m;
            temp2 = n;
        }
        
        while(temp2 != 0){
            r = temp1 % temp2;
            temp1 = temp2;
            temp2 = r;
        }
        gcd = temp1;
        lcm = n * m / gcd;
        
        int[] answer = {gcd, lcm};
        
        return answer;
    }
}