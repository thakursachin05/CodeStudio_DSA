int lowerbound(vector<int> &arr,int m){
    int s = 0;
    int e = arr.size()-1;
    int index = 0;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==m){
            index = mid;
            s =mid+1;
        }
        else if(arr[mid] < m){
            index = mid;
            s = mid+1;
        }
        else e = mid-1;
   
    }
    return index;
}
int bestInsertPos(vector<int> arr, int n, int m)
{   if(n==0) return 0;
    int index = lowerbound(arr,m);
    if(arr[index]<m) index++;
    return index;
}