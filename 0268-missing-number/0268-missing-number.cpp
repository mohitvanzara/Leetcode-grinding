class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int xor1 = 0; // for 0 to N number xor
        int xor2 = 0;
        for(int i = 0 ;i<nums.size() ;i++){
            xor2 = xor2 ^ nums[i];
            xor1 = xor1 ^ (i+1);
        }
        // xor1 = xor1^ nums.size(); if we not use i+1 then this line is consider
        return xor1^xor2;
        
        
    }
};