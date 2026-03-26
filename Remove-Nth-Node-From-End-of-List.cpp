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
13    ListNode* removeNthFromEnd(ListNode* head, int n) {
14
15        ListNode* dummy = new ListNode();
16
17        dummy->next = head;
18
19        ListNode *frstptr = dummy;
20        ListNode *scndptr = dummy;
21
22        for(int i=0; i<n;++i)
23            scndptr = scndptr->next;
24
25        while(scndptr->next!=nullptr)
26        {
27            frstptr = frstptr->next;
28            scndptr = scndptr->next;
29        }
30
31        frstptr -> next = frstptr -> next ->next;
32
33        return dummy->next;
34        
35    }
36};