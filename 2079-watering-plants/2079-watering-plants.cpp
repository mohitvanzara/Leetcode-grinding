class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int step =0;
        int cnt =0;
        int water = capacity;
        for(int i =0 ;i<plants.size();i++){
            if(plants[i]<=water){
                water-=plants[i];
                cnt++;
                step++;

            }
            else{
                water = capacity;
                step= step + 2*cnt;
                i--;
            }
        }
        return step;

        
    }
};