#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
    ~Node()
    {
        int val=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
    }
};
//traverse linked list
void printNode(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}
//get length of linked list
int getLength(Node* &head)
{
    int length=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        length++;
        temp=temp->next;
    }
    return length;
}
//insert element at head
void insertAthead(Node* &head,Node* &tail, int data)
{
    if(head==NULL)
    {
        Node* temp=new Node(data);
        head=temp;
        tail=temp;
    }
    else
    {
        Node* temp=new Node(data);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}
//insert element at tail
void insertAttail(Node* &head, Node* &tail, int data)
{
    if(tail==NULL)
    {
        Node*temp=new Node(data);
        tail=temp;
        head=temp;
    }
    else
    {
        Node* temp=new Node(data);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
}
//insert at position
void insertAtposition(Node* &head, Node* &tail, int position, int data)
{
    //insert at start
    if(position==1)
    {
        insertAthead(head,tail,data);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    //insert at last
    if(temp->next==NULL)
    {
        insertAttail(head,tail,data);
        return;
    }
    Node* node2=new Node(data);
    node2->next=temp->next;
    temp->next->prev=node2;
    temp->next=node2;
    node2->prev=temp;
}
//deletion of node in linked list
void deleteNode(Node*&head,Node*&tail, int position)
{
    if(position==1)
    {
        Node* temp=head;
        temp->next->prev=NULL;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else
    {
        Node* prev=NULL;
        Node* curr=head;
        int cnt=1;
        while(cnt<position)
        {
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        if(prev->next==NULL) //Update Tail
        {
            tail=prev;
        }
    }

}
int main()
{
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    printNode(head);
    cout<<getLength(head)<<endl;
    insertAthead(head,tail,11);
    printNode(head);
    insertAttail(head,tail,13);
    printNode(head);
    insertAtposition(head,tail,3,15);
    printNode(head);
    insertAtposition(head,tail,3,17);
    printNode(head);
    deleteNode(head,tail,5);
    printNode(head);
    cout<<tail->data<<endl;
}