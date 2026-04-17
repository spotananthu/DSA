1/*
2// Definition for a Node.
3class Node {
4public:
5    int val;
6    vector<Node*> children;
7
8    Node() {}
9
10    Node(int _val) {
11        val = _val;
12    }
13
14    Node(int _val, vector<Node*> _children) {
15        val = _val;
16        children = _children;
17    }
18};
19*/
20
21class Solution {
22public:
23    vector<vector<int>> levelOrder(Node* root) {
24
25        vector<vector<int>> ans;
26
27        if(root==nullptr) return ans;
28
29        queue<Node*> q;
30        q.push(root);
31
32        while(!q.empty())
33        {
34            int n = q.size();
35            vector<int> level;
36
37            for(int i=0;i<n;++i)
38            {
39                Node* node = q.front();
40                q.pop();
41
42                for(Node* child : node->children)
43                    q.push(child);
44
45                level.push_back(node->val);
46            }
47
48            ans.push_back(level);
49        }
50        return ans;
51    }
52};