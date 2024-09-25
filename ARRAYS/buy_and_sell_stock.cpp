#include <iostream>
using namespace std;
int maxProfit(int prices[], int n)
{
    if (n <= 1)
    {
        return 0; // If there are no prices or only one price, there can be no profit.
    }

    int minPrice = prices[0]; // Initialize the minimum price to the first day.
    int maxProfit = 0;        // Initialize the maximum profit to 0.

    for (int i = 1; i < n; i++)
    {
        int currPrice = prices[i];
        if (currPrice < minPrice)
        {
            minPrice = currPrice; // Update the minimum price if a smaller price is encountered.
        }
        else
        {
            int currProfit = currPrice - minPrice;  // Calculate the profit by selling at the current price.
            maxProfit = max(maxProfit, currProfit); // Update the maximum profit if the current profit is higher.
        }
    }

    return maxProfit;
}
int main()
{
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = 6;
    cout << maxProfit(prices, n) << endl;
}