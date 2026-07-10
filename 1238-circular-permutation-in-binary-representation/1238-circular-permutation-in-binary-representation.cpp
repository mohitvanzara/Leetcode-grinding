class Solution {
public:
    vector<int> circularPermutation(int n, int start) {
        vector<int> ans;
        int index = 0;
        for(int i =0 ; i< (1<<n) ;i++){
            int grey_code = i ^ (i>>1);
            if(grey_code==start){
                index = i;
            }
            ans.push_back(grey_code);
            
        }
        reverse(ans.begin(),ans.begin()+index);
        reverse(ans.begin()+index,ans.end());
        reverse(ans.begin(),ans.end());

        return ans;
        
    }
};