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
14    vector<int> inorderTraversal(TreeNode* root) {
15
16        vector<int> ans;
17        dfs(root,ans);
18        return ans;
19
20    }
21
22    void dfs(TreeNode* node, vector<int>& ans)
23    {
24        if(node==nullptr) return;
25
26        dfs(node->left, ans);
27        ans.push_back(node->val);
28        dfs(node->right, ans);
29    }
30
31    
32};