#include <iostream>
using namespace std;

void printTriangle(int n)
{
    for (int row = 1; row <= n; row++)
    {
        // for every row run the col
        for (int col = 1; col <= row; col++)
        {
            cout << col << " ";
        }
        cout << endl; // When one row is printed add the new line
    }
}
/*

1
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5


*/

int main()
{
    int n;
    cin >> n;
    printTriangle(n);
}