class Solution {
public:
    int climbStairs(int n) {

        if (n <= 2)
            return n;

        int step2 = 1;  // ek step 1 no
        int step1 = 2;  // ek step 2 no

        for (int i = 3; i <= n; i++) {
            int curr = step1 + step2;
            step2 = step1;
            step1 = curr;
        }
        //using fibonachi because this problm is nothing but fibonachi

        return step1;
    }
};