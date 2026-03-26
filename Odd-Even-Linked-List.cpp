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
13    ListNode* oddEvenList(ListNode* head) {
14
15        if(!head || !head->next) return head;
16        
17        ListNode* odd = head;
18        ListNode* even = head->next;
19        ListNode* evenHead = even;
20
21        while(even && even->next!=nullptr)
22        {
23            odd->next = odd ->next ->next;
24            odd = odd->next;
25
26            even->next = even ->next ->next;
27            even = even->next;
28
29        }
30
31        odd->next = evenHead;
32
33        return head;
34        
35    }
36};