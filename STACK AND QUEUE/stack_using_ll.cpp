#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    int size;
    Node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
};
class Stack{
    public:
    Node* top;
    int size;
    Stack()
    {
        this->top=NULL;
        size=0;
    }
void Push(int x)
{
    Node* temp=new Node(x);
    temp->next=top;
    top=temp;
    size++;
}
int Pop()
{
    if(top==NULL){return -1;}
    int x=top->data; //Define variable to top data;
    Node* temp=top;
    top=top->next;
    delete temp;
    size--;
    return x;
}
int Size()
{
    return size;
}
bool isEmpty()
{
    return top==NULL;
}
int Top()
{
    if(top==NULL){return -1;}
    return top->data;
}
void Print(){
    Node* current=top;
    while(current!=NULL)
    {
        cout<<current->data<<" ";
        current=current->next;
    }
}
};
int main()
{
    Stack s;
    s.Push(3);
    s.Push(6);
    s.Push(8);
    s.Push(1);
    s.Pop();
    s.Top();
    s.Pop();
    s.Top();
    s.Size();
    s.isEmpty();
    s.Print();
}