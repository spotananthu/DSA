class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        int zeroCount =0;
        int maxLen=0;

        while(r<(nums.size()))
        {
            if(nums[r] == 0)
                zeroCount++;

            while(zeroCount>k)
            {
                if(nums[l]== 0)
                    zeroCount--;
                l++;
            }
        
        maxLen = max(maxLen, r - l + 1);

        r++;

        }

        return maxLen;
    }


};