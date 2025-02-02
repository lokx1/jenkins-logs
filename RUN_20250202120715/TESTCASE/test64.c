
#include <stdio.h>

// Function to find the maximum value obtainable by cutting a rod of length n
int rodCutting(int price[], int n) {
    int dp[n + 1];
    dp[0] = 0;

    // Build the table using bottom-up approach
    for (int i = 1; i <= n; i++) {
        int max_val = -1;
        for (int j = 0; j < i; j++)
            max_val = (max_val < price[j] + dp[i - j - 1]) ? price[j] + dp[i - j - 1] : max_val;
        dp[i] = max_val;
    }
    return dp[n];
}

int main() {
    // Test case 1
    int price1[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int n1 = sizeof(price1) / sizeof(price1[0]);
    printf("Test Case 1: Maximum obtainable value by cutting a rod of length %d: %d\n", n1, rodCutting(price1, n1));

    // Test case 2
    int price2[] = {2, 5, 7, 8};
    int n2 = sizeof(price2) / sizeof(price2[0]);
    printf("Test Case 2: Maximum obtainable value by cutting a rod of length %d: %d\n", n2, rodCutting(price2, n2));

    // Test case 3
    int price3[] = {3, 5, 8, 9, 10, 17, 17, 20, 24, 30};
    int n3 = sizeof(price3) / sizeof(price3[0]);
    printf("Test Case 3: Maximum obtainable value by cutting a rod of length %d: %d\n", n3, rodCutting(price3, n3));

    // Test case 4: Single length rod
    int price4[] = {5};
    int n4 = sizeof(price4) / sizeof(price4[0]);
    printf("Test Case 4: Maximum obtainable value by cutting a rod of length %d: %d\n", n4, rodCutting(price4, n4));

    // Test case 5: Zero length rod
    int price5[] = {};
    int n5 = sizeof(price5) / sizeof(price5[0]);
    printf("Test Case 5: Maximum obtainable value by cutting a rod of length %d: %d\n", n5, rodCutting(price5, n5));

    return 0;
}
