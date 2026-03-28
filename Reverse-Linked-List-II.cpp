1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* reverseBetween(ListNode* head, int left, int right) {
14
15        if(!head || left==right) return head;
16
17        ListNode* dummy = new ListNode();
18
19        dummy->next = head;
20
21        ListNode* prev = dummy;
22        ListNode* curr = head;
23
24        for(int i=1; i<left; ++i)
25        {
26            prev = prev->next;
27            curr = curr->next;
28        }
29
30        
31        ListNode* SubListHead = curr;
32        ListNode* preNode = nullptr;
33
34        for(int i=0; i<=(right-left);++i)
35        {
36            ListNode* nxtNode = curr->next;
37
38            curr->next = preNode;
39            preNode = curr;
40            curr = nxtNode;
41        }
42
43        prev->next = preNode;
44        SubListHead->next = curr;
45
46        return dummy->next;
47        
48    }
49};