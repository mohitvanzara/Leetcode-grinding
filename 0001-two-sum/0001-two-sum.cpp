class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // current ans but TC is high

        // vector<int> v;
        // for(int i = 0 ; i<nums.size();i++){
        //     for(int j =i+1;j<=nums.size()-1;j++){
        //         if(nums[i]+nums[j]==target){
        //           v.push_back(i);
        //           v.push_back(j);

        //         }
        //     }

        // }
        // return v;

        // second method using unordered_map
         unordered_map<int, int> mp; // {value, index}
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }
            mp[nums[i]] = i;
        }
        return {};

        
    }
};