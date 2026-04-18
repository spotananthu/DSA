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
14    vector<int> postorderTraversal(TreeNode* root) {
15
16        vector<int> ans;
17        dfs(root,ans);
18
19        return ans;
20        
21    }
22
23    void dfs(TreeNode* node, vector<int>& ans)
24    {
25        if(node==nullptr) return;
26
27        dfs(node->left,ans);
28        dfs(node->right, ans);
29        ans.push_back(node->val);
30    }
31};