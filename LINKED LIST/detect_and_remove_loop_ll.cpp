/*Node* detectLoopHead(Node* head) {
    if (head == NULL || head->next == NULL) {
        return NULL; // No loop
    }
    
    Node* slow = head;
    Node* fast = head;
    
    // Check if a loop exists
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            break; // Loop detected
        }
    }
    
    if (slow != fast) {
        return NULL; // No loop
    }
    
    // Move one pointer to the head and keep the other at the meeting point
    slow = head;
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }
    
    return slow; // Return the start of the loop
}

Node *removeLoop(Node *head) {
    Node* startLoop = detectLoopHead(head);
    
    if (startLoop == NULL) {
        return head; // No loop
    }
    
    Node* temp = startLoop;
    
    while (temp->next != startLoop) {
        temp = temp->next;
    }
    
    temp->next = NULL; // Remove the loop
    
    return head;
}
*/