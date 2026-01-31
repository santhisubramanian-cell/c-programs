#include <stdio.h>
#include <limits.h> // Required for INT_MAX

int find_cheapest_valid_product(int prices[], int n) {
    // Initialize min_price to a large value, effectively infinity for this problem,
    // to ensure the first valid price found will be smaller.
    int min_price = INT_MAX;
    // Flag to check if any valid price was found.
    int found_valid = 0;

    for (int i = 0; i < n; i++) {
        // Check if the current price is a valid price (greater than 0).
        if (prices[i] > 0) {
            found_valid = 1;
            // Update min_price if the current valid price is smaller.
            if (prices[i] < min_price) {
                min_price = prices[i];
            }
        }
    }

    // If no valid price was found, return a special value to indicate this condition.
    // The problem test cases suggest using -1 or a descriptive message.
    if (!found_valid) {
        return -1; // Using -1 as a signal for 'No positive' as per test case
    } else {
        return min_price;
    }
}

int main() {
    int prices1[] = {-1, -3, -2, 0};
    int n1 = sizeof(prices1) / sizeof(prices1[0]);
    int result1 = find_cheapest_valid_product(prices1, n1);
    printf("Test Case 1 Result: %d\n", result1); 
    int prices2[] = {3, 2, 0, 5};
    int n2 = sizeof(prices2) / sizeof(prices2[0]);
    int result2 = find_cheapest_valid_product(prices2, n2);
    printf("Test Case 2 Result: %d\n", result2); 
    int prices3[] = {-5, -2, -1};
    int n3 = sizeof(prices3) / sizeof(prices3[0]);
    int result3 = find_cheapest_valid_product(prices3, n3);
    printf("Test Case 3 Result: %d\n", result3); 
    int prices4[] = {1, 2, 3, 4};
    int n4 = sizeof(prices4) / sizeof(prices4[0]);
    int result4 = find_cheapest_valid_product(prices4, n4);
    printf("Test Case 4 Result: %d\n", result4); 

    return 0;
}
