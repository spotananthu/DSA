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
15    // find smallest node in a subtree (leftmost node)
16    TreeNode* findMin(TreeNode* node) {
17        while(node->left != nullptr)
18            node = node->left;
19        return node;
20    }
21
22    TreeNode* deleteNode(TreeNode* root, int key) {
23
24        if(root == nullptr) return nullptr;
25
26        // search for the node
27        if(key < root->val)
28            root->left = deleteNode(root->left, key);
29
30        else if(key > root->val)
31            root->right = deleteNode(root->right, key);
32
33        // found the node to delete
34        else
35        {
36            // Case 1: no children (leaf node)
37            if(root->left == nullptr && root->right == nullptr)
38                return nullptr;
39
40            // Case 2: one child
41            else if(root->left == nullptr)
42                return root->right;
43
44            else if(root->right == nullptr)
45                return root->left;
46
47            // Case 3: two children
48            else
49            {
50                // find inorder successor (smallest in right subtree)
51                TreeNode* minNode = findMin(root->right);
52
53                // replace value
54                root->val = minNode->val;
55
56                // delete the inorder successor
57                root->right = deleteNode(root->right, minNode->val);
58            }
59        }
60
61        return root;
62    }
63};