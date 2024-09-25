/*

 * Definition of linked list:
 *

 * class Node {

 * public:

 *      int data;

 *      Node *next;

 *

 *      Node(int data) {

 *          this->data = data;

 *          this->next = NULL;

 *      }

 * };

 *

 *************************************************************************

 

int lengthOfLoop(Node *head) {

    // Write your code here

    Node* fast = head;

    Node* slow = head;

    while(fast!=NULL && fast->next!=NULL) {

        fast=fast->next->next;

        slow = slow->next;

        if(fast==slow) {

            int cnt = 0;

            slow = slow->next;

            while(slow!=fast) {

                slow = slow->next;

                cnt++;

            }

            return cnt+1;

        }

    }

    return 0;

}
*/
 

