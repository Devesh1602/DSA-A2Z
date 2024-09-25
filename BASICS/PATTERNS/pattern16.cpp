#include <iostream>
using namespace std;

void printTriangle(int n)
{
    char alphabet='A';
    for (int row = 1; row <=n; row++)
    {
        // for every row run the col
        for (int col = 1; col <= row; col++)
        {
            cout << alphabet << " ";
        }
        alphabet++;
        cout << endl; // When one row is printed add the new line
    }
}
/*

A 
B B 
C C C 
D D D D 
E E E E E 

*/

int main()
{
    int n;
    cin >> n;
    printTriangle(n);
}