#include<iostream>
using namespace std;
int main()
{
    int N = 125766656;
    int num = N;
    int reverse = 0;
    while(N!=0)
    {
        int digit = N%10;
        reverse = reverse*10+digit;
        N = N/10;
    }
    cout<<"The reverse of the"<<" "<<num<<" "<<"is"<<" "<<reverse<<endl;
}

/*
For first digit: 1
num = num*10 + 1 = 0*10 + 1 = 1;

For second digit: 2
num = num*10 + 2 = 1*10 + 2 = 12;

For third digit: 3
num = num*10 + 2 = 12*10 + 3 = 123;
*/
/*
APPROACH:-
Run a while loop until the given number N is equal to zero while(N!=0)
Initialize a variable reverse = 0;
now in each step take remainder of the given number N store it a variable digit, digit = N % 10
Also Divide the number by 10. N= N / 10
in each step the variable reverse get updated as reverse = reverse*10+digit.
*/