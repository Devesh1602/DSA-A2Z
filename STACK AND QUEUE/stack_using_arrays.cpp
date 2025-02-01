#include<iostream>
using namespace std;
class Stack{
    public:
    int size;
    int top;
    int *st;
    Stack()
    {
        size=1000;
        top=-1;
        st=new int[size];
    }
    void push(int x)
    {
        if(top==size-1){
            cout<<"Stack Overflow";
            return;
        }
        top++;
        st[top]=x;
    }
    int pop(){
        if(top==-1)
        {
            cout<<"Stack Underflow";
            return -1;
        }
        int x=st[top];
        top--;
        return x;
    }
    int Top()
    {
        return st[top];
    }
    int Size()
    {
        return top+1;
    }
};
int main()
{
    Stack s;
    s.push(3);
    s.push(7);
    s.push(8);
    s.push(1);
    cout<<s.Top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.Top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.Size()<<endl;
}
