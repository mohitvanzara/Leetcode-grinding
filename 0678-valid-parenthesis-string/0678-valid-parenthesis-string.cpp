class Solution {
public:
    bool checkValidString(string s) {
        int mini = 0;
        int maxi = 0;
        for(char ch:s){
            if(ch=='(') {
                mini++;
                maxi++;
            }
            else if(ch==')'){
                mini--;
                maxi--;
            }
            else{
                // kato +1 , -1 , asitis but for min we will consider -1
                mini--;
                // for max we will consider +1
                maxi++;

            }

            mini = max(mini,0);
            if(maxi<0) return false;
        }
        return mini==0;
        
    }
};