#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void insertAthead(Node* &head, int data)
{
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}
void insertAttail(Node* &tail, int data)
{
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}
void insertAtmiddle(Node* &head, Node* &tail, int position, int data)
{
    Node* temp=head;
    //if position at start
    if(position==1)
    {
        insertAthead(head,data);
    }
    //iterate linked list till position
    int cnt=1;
    while(cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    //if position at last
    if(temp->next==NULL)
    {
        insertAttail(tail,data);
    }
    Node* node2=new Node(data);
    node2->next=temp->next;
    temp->next=node2;
}
void printNode(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}
int main()
{
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    printNode(head);
    insertAthead(head,12);
    printNode(head);
    insertAthead(head,15);
    printNode(head);
    insertAttail(tail,16);
    printNode(head);
    insertAttail(tail,17);
    printNode(head);
    insertAtmiddle(head,tail,4,11);
    printNode(head);
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;
}