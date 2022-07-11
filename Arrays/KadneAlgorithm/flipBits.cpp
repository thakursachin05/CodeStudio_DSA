int flipBits(int* arr, int n) 
{
   int totalOnes = 0;
   int maxSum = 0;
   int currentMax=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            totalOnes++;
        }
        
        int val=0;
        if(arr[i]==1){
            val=-1;
        }
        else {
            val=1;
        }
        
        currentMax = max(val,val+currentMax);
        maxSum = max(maxSum,currentMax);
     }
    maxSum = max(0,maxSum);
    int result = totalOnes+maxSum;
    return result;
}