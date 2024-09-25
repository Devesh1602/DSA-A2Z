#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    ~Node()
    {
        int value=this->data;
        while(this->next!=NULL)
        {
            delete next;
            next=NULL;
        }
    }
};
void insertNode(Node*&tail, int element, int data)
//Insert node based on elements in Linked list
{
    //If list is empty
    if(tail==NULL)
    {
        Node* temp=new Node(data);
        tail=temp;
        temp->next=temp;
    }
    else
    {
        //non-empty list
        Node* curr=tail;
        while(curr->data!=element)
        {
            curr=curr->next;
        }
        //If element found
        Node* temp=new Node(data);
        temp->next=curr->next;
        curr->next=temp;
    }
}
void printNode(Node* &tail)
{
    if(tail==NULL)
    {
        cout<<"List Empty!";
        return;
    }
    Node* temp=tail;
    do
    {
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
}
void deleteNode(Node* &tail, int value)
{
    //empty list
    if(tail==NULL)
    {
        cout<<"List Empty!";
        return;
    }
    else
    {
        Node* prev=tail;
        Node* curr=tail->next;
        while(curr->data!=value)
        {
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        //edge cases
        //if 1 node present
        if(curr==prev)
        {
            tail=NULL;
        }
        //if >=2 linked list nodes
        if(tail==curr)
        {
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}
int main()
{
    Node* tail=NULL;
    insertNode(tail,3,10);
    printNode(tail);
    insertNode(tail,10,11);
    printNode(tail);
    insertNode(tail,11,12);
    printNode(tail);
    insertNode(tail,12,13);
    printNode(tail);
    insertNode(tail,10,9);
    printNode(tail);
    deleteNode(tail,12);
    printNode(tail);
}