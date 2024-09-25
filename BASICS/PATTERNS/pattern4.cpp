#include <iostream>
using namespace std;

void printTriangle(int n)
{
    int num=1;
    for (int row = 1; row <= n; row++)
    {
        // for every row run the col
        for (int col = 1; col <= row; col++)
        {
            cout << num << " ";
        }
        num++;
        cout << endl; // When one row is printed add the new line
    }
}
/*

1
2 2
3 3 3 
4 4 4 4 
5 5 5 5 5

*/

int main()
{
    int n;
    cin >> n;
    printTriangle(n);
}