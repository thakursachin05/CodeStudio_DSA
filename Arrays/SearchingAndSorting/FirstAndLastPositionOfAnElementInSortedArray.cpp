int bs(vector<int> &arr,int key,int flag){
    int s = 0;
    int e = arr.size();
    int index = -1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            index = mid;
            if(flag) e = mid-1;
         
            else s = mid+1;
                
            }
        else if(arr[mid]<key) s = mid+1;
        else e = mid-1;
        }
    return index;
}

pair<int, int> findFirstLastPosition(vector<int> &arr, int n, int x)
{
	
     return {bs(arr,x,1) , bs(arr,x,0)};
}

