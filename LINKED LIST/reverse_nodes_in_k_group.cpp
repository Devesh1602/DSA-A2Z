/*
        Time Complexity: O(n)
        Space Complexity: O(n)

        Where 'n' is the number of nodes in the Linked list.
*/

/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 

Node *kReverse(Node *head, int k)
{
    Node *curr = head;
    Node *prev = NULL, *next = NULL;
    int cnt = 0;

    // Reversing the first K nodes of the given linked list.
    while (curr != NULL && cnt < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        cnt++;
    }

    // If the last group has < k nodes, reversing it again to get the previous order.
    if (cnt < k)
    {
        curr = prev;
        prev = NULL;
        next = NULL;
        cnt = 0;
        while (curr && cnt < k)
        {

            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            cnt++;
        }
    }

    // If some nodes are still left, then we pass it to the recursive function.
    if (next != NULL)
    {
        head->next = kReverse(next, k);
    }

    return prev;
}
*/