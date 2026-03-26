1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    ListNode *detectCycle(ListNode *head) {
12
13        ListNode* slow = head;
14        ListNode* fast = head;
15
16        while(fast!=nullptr && fast->next!=nullptr)
17        {
18            slow = slow->next;
19            fast = fast->next->next;
20
21            if(slow==fast)
22            {
23                fast = head;
24                
25                while(fast!=slow)
26                {
27                    slow = slow->next;
28                    fast = fast->next;
29                }   
30
31                return slow;
32            }
33
34        }
35
36        return nullptr;
37        
38    }
39};