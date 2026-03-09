1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14
15    TreeNode* helper(vector<int>& nums , int min , int max)
16    {
17
18        if(min > max)
19            return nullptr;
20
21        int mid = (min + max) / 2;
22
23        TreeNode* root = new TreeNode(nums[mid]);
24
25        root -> left = helper(nums,min,mid-1);
26        root -> right = helper(nums,mid+1,max);
27
28        return root;
29    }
30
31    TreeNode* sortedArrayToBST(vector<int>& nums) {
32        return helper(nums , 0 , nums.size()-1);
33    }
34
35
36};