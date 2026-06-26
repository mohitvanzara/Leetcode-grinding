class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //using c++ lower_bound() function
        auto it = lower_bound(nums.begin(),nums.end(),target);
        int index = it - nums.begin();
        return index;
    }
};