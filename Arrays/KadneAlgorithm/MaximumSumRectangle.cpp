int kadne(int n,vector<int> &ans){
   int sum = 0;
   int maxR = INT_MIN;
    for(int i=0;i<n;i++){
        sum += ans[i];
        maxR = max(maxR,sum);
        
        if(sum<0) sum = 0;
    }
    return maxR;
}
int maxSumRectangle(vector<vector<int>>& arr, int n, int m)
{
    int maxRect = INT_MIN;
    
    for(int i=0;i<n;i++){
         vector<int> ans(m);
        for(int j=i;j<n;j++){
            for(int k=0;k<m;k++){
                ans[k] += arr[j][k];
            }
            maxRect = max(maxRect,kadne(m,ans));
        }
    }
    return maxRect;
}
