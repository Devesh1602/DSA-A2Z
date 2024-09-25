/*
*
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
    int len(ListNode* head) {
        ListNode* temp = head;
        int length = 0;
        while (temp != nullptr) {
            length++;
            temp = temp->next;
        }
        return length;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length = len(head);

        // Handle edge case: If the list is empty or only has one node,
        // or if n is greater than the length of the list, return nullptr.
        if (head == nullptr || length <= 1 || n > length) {
            return nullptr;
        }

        // Calculate the position of the node to be removed from the beginning.
        int positionToRemove = length - n;

        // If n is 1, remove the first node and return the new head.
        if (positionToRemove == 0) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        ListNode* curr = head;
        ListNode* prev = nullptr;

        // Traverse the list to find the node before the one to be removed.
        for (int i = 0; i < positionToRemove; i++) {
            prev = curr;
            curr = curr->next;
        }

        // Remove the node and update the pointers.
        prev->next = curr->next;
        delete curr;

        return head;
    }
};*/