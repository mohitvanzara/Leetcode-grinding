class Solution {
public:
    int countHillValley(vector<int>& nums) {
        //Remove consecutive duplicates
        vector<int> temp;
        temp.emplace_back(nums[0]);
        for(int i = 1;i<nums.size() ; i++){
            if(nums[i]!=nums[i-1]){
                temp.emplace_back(nums[i]);
            }
        }
        int count=0;
        //count hills and vally
        for(int i=1; i<temp.size()-1 ;i++){
            if((temp[i]>temp[i-1]  &&  temp[i]>temp[i+1]) || (temp[i]<temp[i-1]  &&  temp[i]<temp[i+1])){
                count++;
            }
        }
        return count;
        
    }
};