#include <iostream>
using namespace std;

// Node class representing a single node in the linked list
class Node {
public:
    int data;
    Node* next;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
class Queue{
    public:
    Node* start, *end;
    Queue()
    {
        start=end=NULL;
    }
    bool isEmpty()
    {
        return start=NULL;
    }
    void enqueue(int x)
    {
        Node* temp=new Node(x);
        if(isEmpty()){ //if queue empty
            start=end=temp;
            return;
        }
        end->next=temp;
        end=temp;
    }
    void dequeue()
    {
        if(isEmpty())
        {
            return;
        }
        Node* temp=start;
        start=start->next;
        if(start==NULL){end=NULL;}
        delete temp;
    }
    int getFront() {
      
      // Checking if the queue is empty
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return start->data;
    }
    int getRear() {

      // Checking if the queue is empty
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
      
        return end->data;
    }
};
int main()
{
    Queue Q;
    Q.enqueue(10);
    Q.enqueue(20);
    Q.enqueue(30);
    Q.enqueue(40);
    Q.enqueue(50);
    Q.dequeue();
    Q.getFront();
    Q.dequeue();
    Q.getRear();
    Q.isEmpty();
}