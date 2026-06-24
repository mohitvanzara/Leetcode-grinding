class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n =nums.size();
        k = k % n; // k ni unique rotate value
        // vector<int> temp(k);
        // // assign the k element into temp vector 
        // for(int i = 0 ;i<k ;i++){
        //     temp[i]=nums[n-k+i]; //done
        // }
        // // remeaing element shift right by k position
        // for(int i =n-k-1 ;i>=0 ;i--){
        //     nums[i+k]=nums[i]; // done
        // }
        // //
        // for(int i =0 ;i<k ;i++){
        //     nums[i]=temp[i];//done
        // }

        // using reverse
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};