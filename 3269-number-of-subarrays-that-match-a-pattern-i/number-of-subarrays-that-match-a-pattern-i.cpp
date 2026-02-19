class Solution {
public:
    int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {

       int count = 0;
       int n=nums.size();
       int m=pattern.size();

       if(n<m+1)
        return 0; 

       for(int i=0; i<n-m; ++i)
       {
            bool valid = true;

            for(int k =0;k<m;++k)
            {
                int p = (((nums[i+k+1])>(nums[i+k]))-((nums[i+k+1])<(nums[i+k])));
                if(p!=pattern[k])
                {
                    valid = false;
                    break;
                }
            }

        if(valid)
            count++;
       } 
        return count;
    }
};