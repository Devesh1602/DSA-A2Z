#include <iostream>
using namespace std;

void printTriangle(int n)
{
    for (int row = n; row >=1; row--)
    {
        // for every row run the col
        for (int col = 1; col <= row; col++)
        {
            cout << (char)(col+64);
        }
        cout << endl; // When one row is printed add the new line
    }
}
/*


ABCDE
ABCD
ABC
AB
A

*/

int main()
{
    int n;
    cin >> n;
    printTriangle(n);
}