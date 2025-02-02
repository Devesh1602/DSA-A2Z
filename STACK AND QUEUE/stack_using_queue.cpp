#include<iostream>
#include<queue>
using namespace std;
class Stack{
    queue<int> q;
    public:
    void Push(int x)
    {
        q.push(x);
        int n=q.size();
        for(int i=0;i<n-1;i++)
        {
            q.push(q.front());
            q.pop();
        }
    }
    int Pop()
    {
        int a=q.front();
        q.pop();
        return a;
    }
    int Top()
    {
        return q.front();
    }
    int Size()
    {
        return q.size();
    }
    bool isEmpty()
    {
        return q.empty();
    }
};
int main()
{
    Stack s;
    s.Push(3);
    s.Push(2);
    s.Push(4);
    s.Push(1);
    cout<<s.Top();
    cout<<s.Size();
    cout<<s.Pop();
    cout<<s.Top();
    cout<<s.Size();
    cout<<s.isEmpty();
}