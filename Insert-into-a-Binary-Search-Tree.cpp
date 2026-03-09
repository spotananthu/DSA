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
15    TreeNode* insertIntoBST(TreeNode* root, int val) {
16
17        if(root==nullptr)
18        {
19            TreeNode* t = new TreeNode(val);
20            return t;
21        }
22
23        if(val < root->val)
24            root->left = insertIntoBST(root->left,val);
25        else if(val > root->val)
26            root->right = insertIntoBST(root->right,val);
27
28        return root;
29        
30    }
31};