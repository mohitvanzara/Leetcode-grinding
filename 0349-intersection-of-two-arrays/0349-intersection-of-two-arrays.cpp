class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());   // <-- required for two pointers
        sort(nums2.begin(), nums2.end());   // <-- required for two pointers
        vector<int> ans;
        int i = 0, j = 0;
        int n1 = nums1.size(), n2 = nums2.size();
        
        while (i < n1 && j < n2) {
               // Skip duplicates in nums1
            if (i > 0 && nums1[i] == nums1[i - 1]) {
                i++;
                continue;
            }
            // Skip duplicates in nums2
            if (j > 0 && nums2[j] == nums2[j - 1]) {
                j++;
                continue;
            }
            
            if (nums1[i] < nums2[j]) {
                i++;
            } else if (nums1[i] > nums2[j]) {
                j++;
            } else {
                // Found a match
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        
        return ans;
        
    }
};