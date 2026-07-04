class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++){
            int cnt=0;
            int c = i;
            while(c>1){
                if(c%2==1) cnt++;
                c/=2;
            }
            if(c!=0) cnt++;
            
            ans.push_back(cnt);
        }
        return ans;
        
    }
};