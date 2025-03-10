//Euclidean’s theorem.
/*
Intuition: Gcd is the greatest number which is divided by both a and b.
If a number is divided by both a and b, it is should be divided by (a-b) and b as well.
Approach:
Recursively call gcd(b,a%b) function till the base condition is hit.
b==0 is the base condition.When base condition is hit return a,as gcd(a,0) is equal to a.

GCD(a,b)=GCD(b,a%b)

*/
#include<iostream>
using namespace std;
int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}
int main()
{

	int a = 4, b = 8;
	cout <<"The GCD of the two numbers is "<<gcd(a, b);
}