#include <iostream>
using namespace std;

int getSingleElement(int arr[], int n) {
    // XOR all the elements:
    int xorr = 0;
    for (int i = 0; i < n; i++) {
        xorr = xorr ^ arr[i];
    }
    return xorr;
}

int main()
{
    int arr[] = {4, 1, 2, 1, 2};
    int n=5;
    int ans = getSingleElement(arr, n);
    cout << "The single element is: " << ans << endl;
    return 0;
}
