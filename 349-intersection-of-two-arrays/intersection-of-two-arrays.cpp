
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> temp;
        unordered_set<int> ans;
        for(int i = 0; i < nums1.size(); i++) {
            temp.insert(nums1[i]);
        }
        for(int j = 0; j < nums2.size(); j++) {
            if(temp.find(nums2[j]) != temp.end()) {
                ans.insert(nums2[j]);
            }
        }
        return vector<int>(ans.begin(), ans.end());
    }
};
