long long kadne(vector<int> &arr,int n,int k){
    long long sum = 0;
    long long maxSum = -1000007;
    for(int i=0;i<n*k;i++){
        sum += arr[i%n];
        
        maxSum = max(maxSum , sum);
        
        if(sum < 0 ) sum = 0;
        
    }
    
    return maxSum;
}
long long maxSubSumKConcat(vector<int> &arr, int n, int k)
{
	if(k==1) return kadne(arr,n,1);
    long long sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    if(sum < 0){
        return kadne(arr,n,2);
    }
    
    else return sum*(k-2) + kadne(arr,n,2);
}