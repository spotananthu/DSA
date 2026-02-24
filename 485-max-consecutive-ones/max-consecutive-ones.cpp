class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int k=0;
        int maxv=0;

        for(int x:nums)
        {
            if(x==1)
            {   k++;
                maxv = max(maxv,k);
            }
            else
                k=0;
        }

        return maxv;
    }
};