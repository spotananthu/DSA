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
14    int diameterOfBinaryTree(TreeNode* root) {
15
16        int diameter = 0;
17        height(root,diameter);
18
19        return diameter;
20        
21    }
22
23    int height(TreeNode* node, int& diameter)
24    {
25        if(node==nullptr) return 0;
26
27        int lh = height(node->left,diameter);
28        int rh = height(node->right, diameter);
29
30        diameter = max(diameter,lh+rh);
31
32        return 1+ max(lh,rh);
33    }
34};