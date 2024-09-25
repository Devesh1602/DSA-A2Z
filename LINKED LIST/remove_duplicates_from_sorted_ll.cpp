/*
    Time complexity: O(n)
    Space complexity: O(1)

    Where 'n' is the size of the linked list.
*/

/**
 * Definition of doubly linked list:
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this->data = data;
 *          this->prev = prev;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************

Node * removeDuplicates(Node *head)
{

    // Initialize 'cur' to store head
    Node * cur = head;

    // Run a while loop
    while (cur != NULL && cur -> next != NULL) {

        // Next element has same value as the current element
        if (cur -> next -> data == cur -> data) {
            // Adjust links to remove the next element
            cur -> next = cur -> next -> next;
        }

        // Next element is different from the current element
        else {
            cur = cur -> next;
        }
    }

    return head;
}
*/