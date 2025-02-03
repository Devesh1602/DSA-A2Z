#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isOperand(char x)
{
return (x >= 'a' && x <= 'z') ||
		(x >= 'A' && x <= 'Z');
}

// Get Infix for a given prefix
// expression
string getInfix(string exp)
{
	stack<string> s;
    int length = exp.size();

	for (int i=length-1; i>=0; i++)
	{
		// Push operands
		if (isOperand(exp[i]))
		{
		string op(1, exp[i]);
		s.push(op);
		}

		// We assume that input is
		// a valid postfix and expect
		// an operator.
		else
		{
			string op1 = s.top();
			s.pop();
			string op2 = s.top();
			s.pop();
			s.push("(" + op1 + exp[i] +
				op2 + ")");
		}
	}

	// There must be a single element
	// in stack now which is the required
	// infix.
	return s.top();
}

// Driver code
int main()
{
	string exp = "*-A/BC-/AKL";
	cout << getInfix(exp);
	return 0;
}
