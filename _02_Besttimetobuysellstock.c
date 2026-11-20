
#include <stdio.h>

int maxProfit(int* prices, int pricesSize)
{
    int minimum = prices[0];
    int bestProfit = 0;

    for (int i = 1; i < pricesSize; i++)
    {
        int profit = prices[i] - minimum;

        if (profit > bestProfit)
            bestProfit = profit;

        if (prices[i] < minimum)
            minimum = prices[i];
    }

    return bestProfit;
}

int main()
{
    int prices[] = {7, 1, 5, 3, 6, 4};

    int size = sizeof(prices) / sizeof(prices[0]);

    int result = maxProfit(prices, size);

    printf("Maximum Profit: %d\n", result);

    return 0;
}