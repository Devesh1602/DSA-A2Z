/*Iterative Approach
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL||head->next==NULL)
        {
            return head;
        }
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* forward=NULL;
        while(curr!=NULL)
        {
            forward=curr->next ;//Store thr remaining LL
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
};*/
/*Recursive Approach
class Solution {
public:

    ListNode* reverseList(ListNode* &head) {

        if (head == NULL||head->next==NULL)
            return head;

        ListNode* nnode = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return nnode;
    }
};
*/