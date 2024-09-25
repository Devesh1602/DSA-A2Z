// A divisor is a number that gives remainder as zero when divided

/*
From the intuition, we can come to a conclusion that we don’t need to traverse all the candidates and if we found a single divisor,
we can also find another divisor(Here, we need to be careful, if the given number is perfect square, like 36, 6 also give 6 as quotient. This is a corner case.)
By keeping these in mind, it is enough if we traverse upto the root of a number. Whenever we find a divisor, we print it and also print the quotient. If the quotient is same, we ignore it. Because, root of a perfect square will give same quotient as itself.
The quotients are the numbers that are on the other side of the root. So, its okay if we stop traversing at root.
This approach is time efficient than the previous one. But the output sequences are not same.
In the previous approach, we get an ordered output unlike here.

*/
#include <iostream>
#include <cmath>
using namespace std;

void printDivisorsOptimal(int n)
{

    cout << "The Divisors of " << n << " are:" << endl;
    for (int i = 1; i <= sqrt(n); i++)
        if (n % i == 0)
        {
            cout << i << " ";
            if (i != n / i)
                cout << n / i << " ";
        }

    cout << "\n";
}

int main()
{
    printDivisorsOptimal(36);
    return 0;
}