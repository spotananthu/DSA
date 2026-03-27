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
13    bool isPalindrome(ListNode* head) {
14        
15        ListNode* fast = head;
16        ListNode* slow = head;
17
18        while(fast!=nullptr && fast->next!=nullptr)
19        {
20            slow = slow->next;
21            fast = fast->next->next;
22        }
23
24        if(fast!=nullptr) //checking for odd - if odd keep the xtra elem in first half
25            slow = slow->next;
26
27        slow = reverseList(slow);
28        fast = head;
29
30        while(slow!=nullptr)
31        {
32            if(fast->val != slow->val)
33                return false;
34
35            fast = fast->next;
36            slow = slow->next;
37        }
38
39        return true;
40
41    }
42
43    private:
44    ListNode* reverseList(ListNode* slow)
45    {
46        ListNode* prev = nullptr;
47        ListNode* curr = slow;
48
49        while(curr!=nullptr)
50        {
51            ListNode* tmp = curr->next;
52
53            curr->next = prev;
54            prev = curr;
55            curr = tmp;
56
57        }
58
59        return prev;
60    }
61};