// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //     int row;
// //     int column;
// //     cout<< "enter row:";
// //     cin>> row;
// //     cout <<"enter column:";
// //     cin>> column;
// //     int i,j;
// // for (i=1;i<=row;i++)
// // {
// //     for(j=1;j<=column;j++)
// //     cout<<" * ";
// //     cout<<endl;
// // }
// // }/

// #include <iostream>
// #include <vector>
// #include <limits>

// int maxProfit(const std::vector<int>& prices) {
//     // Edge case: if the vector has less than 2 prices, no profit can be made
//     if (prices.size() < 2) {
//         return 0;
//     }

//     int min_price = std::numeric_limits<int>::max();
//     int max_profit = 0;

//     for (const int& price : prices) {
//         // Update minimum price
//         if (price < min_price) {
//             min_price = price;
//         }
//         // Calculate current profit
//         int profit = price - min_price;
//         // Update maximum profit if current profit is higher
//         if (profit > max_profit) {
//             max_profit = profit;
//         }
//     }

//     return max_profit;
// }

// int main() {
//     std::vector<int> prices = {5, 6, 1, 3, 7};
//     std::cout << "Maximum Profit: " << maxProfit(prices) << std::endl; // Output: 6
//     return 0;
// }
#include <iostream>
#include <vector>
#include <limits>

int maxProfit(const std::vector<int>& prices) {
    if (prices.size() < 2) {
        return 0; // Not enough prices to make a profit
    }

    int min_price = std::numeric_limits<int>::max();
    int max_profit = 0;

    for (const int& price : prices) {
        // Update minimum price
        if (price < min_price) {
            min_price = price;
        }
        // Calculate current profit
        int profit = price - min_price;
        // Update maximum profit if current profit is higher
        if (profit > max_profit) {
            max_profit = profit;
        }
    }

    return max_profit;
}

int main() {
    int n;
    std::cin >> n; // Read the number of prices
    std::vector<int> prices(n);
    
    for (int i = 0; i < n; ++i) {
        std::cin >> prices[i]; // Read each price
    }

    std::cout << maxProfit(prices) << std::endl; // Output the maximum profit
    return 0;
}
