// //Approach 1: Where the push operation is O(N) and top and pop is O(1)
// //In-efficient approach
// #include <iostream>
// #include<stack>
// using namespace std;

// struct Queue {
//   stack < int > input, output;
  
//   // Push elements in queue
//   void Push(int data) {
//     // Pop out all elements from the stack input
//     while (!input.empty()) {
//       output.push(input.top());
//       input.pop();
//     }
//     // Insert the desired element in the stack input
//     cout << "The element pushed is " << data << endl;
//     input.push(data);
//     // Pop out elements from the stack output and push them into the stack input
//     while (!output.empty()) {
//       input.push(output.top());
//       output.pop();
//     }
//   }
//   // Pop the element from the Queue
//   int Pop() {
//     if (input.empty()) {
//       cout << "Stack is empty";
//       exit(0);
//     }
//     int val = input.top();
//     input.pop();
//     return val;
//   }
//   // Return the Topmost element from the Queue
//   int Top() {
//     if (input.empty()) {
//       cout << "Stack is empty";
//       exit(0);
//     }
//     return input.top();
//   }
//   // Return the size of the Queue
//   int size() {
//     return input.size();
//   }
// };
// int main() {
//   Queue q;
//   q.Push(3);
//   q.Push(4);
//   cout << "The element poped is " << q.Pop() << endl;
//   q.Push(5);
//   cout << "The top of the queue is " << q.Top() << endl;
//   cout << "The size of the queue is " << q.size() << endl;
// }



//Approach 2: Where the push operation is O(1) and top and pop is O(N)
//MOST EFFICIENT APPROACH
#include<iostream>
#include<stack>
using namespace std;
class Queue{
    stack<int> s1,s2;
    public:
    void push(int x)
    {
        s1.push(x);
    }
    int Pop()
    {
        if(s2.empty())
        {
            while(!s1.size())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int result=s2.top();
        s2.pop();
        return result;
    }
    int Top()
    {
        if(s2.empty())
        {
            while(!s1.size())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }
    int size() {
    return (s2.size() + s1.size()); 
  }
};
int main()
{
    Queue q;
    q.push(3);
    q.push(4);
    cout<<q.Pop();
    q.push(5);
    cout<<q.Top();
    cout<<q.size();
}