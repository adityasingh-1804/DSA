class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int low = 0;
        int res = 0;
        int count = 0;
        for (int high = 0; high < n; high++) {
            if (nums[high] == 1) {
                count++;
            }
            int len = high - low + 1;
            int diff = len - count;
            while (diff > k) {
                if (nums[low] == 1) {
                    count--;
                }
                low++;
                len = high - low + 1;
                diff = len - count;
            }
            res = max(res, high - low + 1);
        }
        return res;
    }
};