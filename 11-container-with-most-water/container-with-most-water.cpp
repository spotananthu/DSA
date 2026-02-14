class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int temp = 0;
        int area = 0;
        int i = 0;
        int j = (heights.size())-1;

        while(i<j)
        {
            area = (j-i) * min(heights[i],heights[j]);
            if(area > temp)
                temp = area;

            if(heights[i] < heights[j])
                i++;
            else
                j--;
        }

        return temp;
    }
};