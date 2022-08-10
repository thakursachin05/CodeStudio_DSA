// https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118824/offering/1381996

#include <vector>

int minCost(int i, int j, vector<vector<int>>&dp, vector<int>&prefSum) {
    // Base case
    if (i == j) {
        return dp[i][j] = 0;
    }

    // If we have already calculated the result, then just return it.
    if (dp[i][j] != -1) {
        return dp[i][j];
    }

    // Recursive case
    int sum = 0;
    if (i == 0) {
        sum = prefSum[j];
    }

    else {
        sum = prefSum[j] - prefSum[i - 1];
    }
    
    dp[i][j] = INT_MAX;

    // Finding the minimum cost by merging the adjacent elements.
    for (int k = i; k < j; k++) {
        dp[i][j] = min(dp[i][j], minCost(i, k, dp, prefSum) + minCost(k + 1, j, dp, prefSum) + sum);
    }

    return dp[i][j];
}


int findMinCost(vector<int>&arr, int n) {
    // Creating a prefix sum array.
    vector<int>prefSum(n, 0);
    prefSum[0] = arr[0];

    for (int i = 1; i < n; i++) {
        prefSum[i] = prefSum[i - 1] + arr[i];
    }

    // Creating a 2D dp array for storing the results.
    vector<vector<int>>dp(202, vector<int>(202, -1));
    return minCost(0, n - 1, dp, prefSum);
}
