/*
    Time Complexity: O(n)
    Space Complexity: O(1)

    Where 'n' is the number of nodes in the doubly linked list.
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
 *          this -> data = data;
 *          this -> prev = prev;
 *          this -> next = next;
 *      }
 * };
 *
 ************************************************************************

vector<pair<int, int>> findPairs(Node* head, int k)
{
    vector<pair<int, int>> ans;
    Node * start = head;
    Node * end = head;

    // Traverse the linked list to the end.
    while (end->next != NULL)
    {
        end = end->next;
    }

    while (start->data < end->data)
    {
        int sum = start->data + end->data;
        if (sum == k)
        {
            ans.push_back(make_pair(start->data, end->data));
            start = start->next;
            end = end->prev;
        }
        else if (sum < k)
        {
            start = start->next;
        }
        else
        {
            end = end->prev;
        }

    }

    return ans;
}
*/