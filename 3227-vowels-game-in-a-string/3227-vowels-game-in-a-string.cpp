class Solution {
public:
    bool doesAliceWin(string s) {
        int vowelCount = 0;
        for(int i = 0 ; s[i] != '\0';i++){
            char ch = s[i];
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                vowelCount++;
            }
        }
        if(vowelCount == 0){
            return false;
        }
        else{
            return true;
        }
    }
    
};