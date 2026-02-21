class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        double csum = 0;
        for(int i=0;i<k;++i)
            csum+=nums[i];

        double maxSum=csum;
        for(int i=k; i<nums.size();++i)
        {
            csum+=nums[i];
            csum-=nums[i-k];
            maxSum = max(maxSum,csum);
        }

        return maxSum/k;
    }
};