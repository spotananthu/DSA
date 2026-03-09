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
17        if(root==nullptr) return;
18        
19        inOrder(root->left,rs);
20        rs.push_back(root->val);
21        inOrder(root->right,rs);
22    }
23    
24    bool isValidBST(TreeNode* root) {
25
26        vector<int> rs;
27
28        inOrder(root,rs);
29
30
31    for(int i = 1; i < rs.size(); i++)
32    {
33        if(rs[i] <= rs[i-1])  
34            return false;
35    }
36
37    return true;
38}
39};