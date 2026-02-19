class Solution {
public:
    int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {

        int n = nums.size();
        int m = pattern.size();
        int count = 0;

        for (int i = 0; i + m < n; i++) {
            bool valid = true;

            for (int k = 0; k < m; k++) {
                if (pattern[k] == 1) {
                    if (!(nums[i + k + 1] > nums[i + k])) {
                        valid = false;
                        break;
                    }
                } 
                else if (pattern[k] == 0) {
                    if (!(nums[i + k + 1] == nums[i + k])) {
                        valid = false;
                        break;
                    }
                } 
                else { // pattern[k] == -1
                    if (!(nums[i + k + 1] < nums[i + k])) {
                        valid = false;
                        break;
                    }
                }
            }

            if (valid) count++;
        }

        return count;
    }
};