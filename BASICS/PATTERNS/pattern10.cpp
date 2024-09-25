#include <iostream>
using namespace std;

void printTriangle(int n)
{
    for (int row = 1; row < 2*n; row++)
    {
        // for every row run the col
        int totalColumnsInRow=row>n ? 2*n-row : row;
        for (int col = 1; col <= totalColumnsInRow; col++)
        {
            cout << "* ";
        }
        cout << endl; // When one row is printed add the new line
    }
}
/*

* 
* * 
* * * 
* * * * 
* * * * *
* * * *
* * *
* *
*

*/

int main()
{
    int n;
    cin >> n;
    printTriangle(n);
}