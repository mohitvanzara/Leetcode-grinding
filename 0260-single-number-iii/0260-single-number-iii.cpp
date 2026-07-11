class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
         long long xr = 0;

        // XOR of all numbers
        for (int num : nums)
            xr ^= num;

        // Rightmost set bit
        long long mask = xr & (-xr);

        int a = 0, b = 0;

        // Divide into two groups
        for (int num : nums) {
            if (num & mask)
                a ^= num;
            else
                b ^= num;
        }

        return {a, b};
    }
};