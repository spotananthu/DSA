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
14    vector<vector<int>> levelOrder(TreeNode* root) {
15
16        vector<vector<int>> ans;
17
18        if(root==nullptr)
19            return ans;
20
21        queue<TreeNode*> q;
22        q.push(root);
23
24
25
26        while(!q.empty())
27        {
28            vector<int> level;
29            int n = q.size();
30
31            for(int i = 0 ; i< n ; ++i)
32            {
33                TreeNode* node = q.front();
34                q.pop();
35
36                if(node->left!=nullptr) q.push(node->left);
37                if(node->right!=nullptr) q.push(node->right);
38
39                level.push_back(node->val);
40            }
41
42            ans.push_back(level);
43        }
44        return ans;
45        
46    }
47};