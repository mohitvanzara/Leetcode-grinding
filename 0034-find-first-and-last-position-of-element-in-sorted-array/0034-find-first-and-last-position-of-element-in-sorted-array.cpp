class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //--simple linear binary search o(n)--//

        // int first = -1;
        // int last = -1;
        // for(int i = 0 ;i<nums.size();i++){
        //     if(nums[i]==target){
        //         if(first == -1){
        //             first = i;
        //         }
        //         last = i;
        //     }
        // }
        // return {first,last};

        // binary search 2log(n)//
        int first= -1;
        int last = -1;
        int low = 0;
        int high = nums.size()-1;
        while(low<=high){
            int mid = (low + high)/2;
            if(nums[mid]==target){
                first = mid;
                high = mid -1;
            }
            else if(nums[mid]>target){
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }
        int low1 = 0;
        int high1 = nums.size()-1;
        if(first==-1) return {-1,-1};
        while(low1<=high1){
            int mid = (high1+low1)/2;
             if(nums[mid]==target){
                last = mid;
                low1 = mid+1;
            }
            else if(nums[mid]>target){
                high1 = mid-1;
            }
            else {
                low1 = mid+1;
            }

        }
        return {first,last};

        
        
    }
};