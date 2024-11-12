// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to find the maximum profit
int Profit_gained(int* prices, int n)
{
	int profit = 0, curr_day = n - 1;

	// s from the last day
	while (curr_day > 0) {

		int day = curr_day - 1;

		// Traverse and keep adding the
		// profit until a day with
		// price of stock higher
		// than curr_day is obtained
		while (day >= 0
			&& (prices[curr_day]
				> prices[day])) {

			profit += (prices[curr_day]
					- prices[day]);

			day--;
		}

		// Set this day as curr_day
		// with maximum cost of stock
		// currently
		curr_day = day;
	}

	// Return the profit
	return profit;
}

// Driver Code
int main()
{
	// Given array of prices
	int prices[] = { 2, 3, 5 };

	int N = sizeof(prices) / sizeof(prices[0]);

	// Function Call
	cout << Profit_gained(prices, N);

	return 0;
}
