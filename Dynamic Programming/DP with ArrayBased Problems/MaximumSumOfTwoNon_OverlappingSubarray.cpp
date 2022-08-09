// https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118824/offering/1381987

#include<bits/stdc++.h>

int maxSumTwoSubarray(int arr[], int N, int K)
{

    
    int prefix[N+1];
    
    prefix[0] = 0;
    
    for(int i=0;i<N;i++){
        prefix[i+1] = prefix[i]+arr[i];
    }
     
    int dp[N+1];
    dp[K] = prefix[K];
    
    for(int i=K+1;i<=N;i++){
        dp[i] = max(dp[i-1], prefix[i]-prefix[i-K]); 
    }
    
    int maxAns = -1000000;
    
    for(int i = 2*K ; i<=N;i++){
        maxAns = max(maxAns,  prefix[i] - prefix[i-K]+ dp[i-K]);
    }
    return maxAns;
}
