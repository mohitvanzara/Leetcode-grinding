class Solution {
public:
    bool isPalindrome(int x) {
        // check for negative palindrome number
        // if(x<0) return 0;
        // int result = 0;
        // int real_Number = x;
        
        // while(x>0){
        //     int last_digit = x%10;
        //     x/=10;
        //     int digit = x/10;
        //      // Check for overflow
        //     if (result > (INT_MAX - last_digit) / 10) {
        //         return false; // Overflow would happen
        //     }

        //     result = result*10 + last_digit;
        // }
        // return real_Number == result ;

        //other method using reverese half method
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;

        int reversedHalf = 0;
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }

        return (x == reversedHalf || x == reversedHalf / 10);
    }
};