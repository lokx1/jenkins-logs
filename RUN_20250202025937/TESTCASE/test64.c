
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

void testRodCutting(int price[], int n, int expected) {
    int result = rodCutting(price, n);
    if(result == expected) {
        printf("Test passed for rod length %d: Expected %d, got %d\n", n, expected, result);
    } else {
        printf("Test failed for rod length %d: Expected %d, got %d\n", n, expected, result);
    }
}

int main() {
    int price1[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int n1 = sizeof(price1) / sizeof(price1[0]);
    testRodCutting(price1, n1, 22);

    int price2[] = {3, 5, 8, 9, 10, 17, 17, 20};
    int n2 = sizeof(price2) / sizeof(price2[0]);
    testRodCutting(price2, n2, 24);

    int price3[] = {2, 5, 7, 8};
    int n3 = sizeof(price3) / sizeof(price3[0]);
    testRodCutting(price3, n3, 10);

    int price4[] = {2, 3, 7, 8, 9};
    int n4 = sizeof(price4) / sizeof(price4[0]);
    testRodCutting(price4, n4, 12);

    int price5[] = {1, 2, 3};
    int n5 = sizeof(price5) / sizeof(price5[0]);
    testRodCutting(price5, n5, 3);

    return 0;
}
