long long maxSubarraySum(int arr[], int n)
{
 	long long maxSum  = -1e7+9;
    long maxtillnow = 0;
    if(n==0) return 0;
    for(int i=0;i<n;i++){
        maxtillnow+=arr[i];
        
        if(maxtillnow<0){
            maxtillnow=0;
        }
        if(maxSum < maxtillnow){
            maxSum = maxtillnow;
        }
        
    }
    return maxSum;
    
}