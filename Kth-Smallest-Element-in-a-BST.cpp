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
15    void inOrder(TreeNode* root, vector<int>& rs)
16    {
17        int x = 0;
18            
19        if(root==nullptr) return;
20            
21        inOrder(root->left,rs);
22        rs.push_back(root->val);
23        inOrder(root->right,rs);
24
25    }
26        
27    int kthSmallest(TreeNode* root, int k) {
28
29        vector<int> rs;
30        inOrder(root,rs);
31        
32        return rs[k-1];
33    }
34        
35
36};