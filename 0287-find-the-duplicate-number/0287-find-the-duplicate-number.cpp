class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size()-1;
        int ans = 0;
        for (int bit = 0; bit < 32; bit++) {
            int mask = (1 << bit);
            int count_num = 0;
            int count_n = 0;
            for (int x : nums) {
                if (x & mask)
                    count_num++;
            }
            for (int k = 1; k <= n; k++) {
                if (k & mask) {
                    // 1 to n ma set bit for perticular number k mate set bit
                    count_n++;
                }
            }
            if (count_num > count_n) {
                ans = ans | mask;
            }
        }
        return ans;
    }
};