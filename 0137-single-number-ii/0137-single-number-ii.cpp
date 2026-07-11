class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // for(int i =1 ;i<nums.size() ;i+=3){
        //     if(nums[i]!=nums[i-1]){
        //         return nums[i-1];
        //     }
        // }
        // return nums[nums.size()-1];

        // bucket method

        int ones = 0;
        int twoes = 0;
        for(int i =0 ;i<nums.size();i++){
            ones = ( ones^nums[i] ) & (~(twoes));
            twoes = (twoes^nums[i]) & (~(ones));
        }
        return ones;

        // modulo 3 method using counting bits;
        // int ans =0;
        // int cnt =0;
        // for(int i =0 ;i<32;i++){
        //     if(nums[i]&(1<<i)){
        //         cnt++;
        //     }
        //     if(cnt%3){
        //         ans = ans | (1<<i);
        //     }
        // }
        // return ans;
    }
};