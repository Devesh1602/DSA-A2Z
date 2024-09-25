/*APPROACH →

Reverse the linked list
Add 1 to the list and check whether a carry is generated or not
If carry is generated then mod the value of the node with 10
Move to the next node
EDGE CASE →  9→9→9→X

For such case check whether there is still carry at the end of the loop.
If yes, just add a new node with value 1. 
That's all. Short and Simple code ;)
 

Node *reverse(Node *head) {

    Node*curr = head, *prev = NULL;

    while(curr) {

        Node *next = curr->next;

        curr->next = prev;

        prev = curr;

        curr = next;

    }

    return prev;

}

Node *addOne(Node *head)

{

    int carry = 0;

    head = reverse(head);

    Node *prev = NULL;

    Node* ref = head;

    

    while(head != NULL) {

        head->data = head->data + 1;

        carry = (head->data) / 10;

        if(carry != 0) {

            head->data = head->data%10;

            prev = head;

            head = head->next;

        }

        else break;

    }

    if(carry != 0) prev->next = new Node(1);

    head = reverse(ref);

    return head;

}
*/