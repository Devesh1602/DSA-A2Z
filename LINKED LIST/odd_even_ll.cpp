/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next) {
            return head; // If the list is empty or has only one node, no need to process.
        }
        
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenHead = even; // Save the head of the even list.
        
        while (even && even->next) {
            odd->next = even->next; // Link odd nodes.
            odd = odd->next;
            even->next = odd->next; // Link even nodes.
            even = even->next;
        }
        
        odd->next = evenHead; // Connect the end of the odd list to the start of the even list.
        
        return head;
    }
};
*/