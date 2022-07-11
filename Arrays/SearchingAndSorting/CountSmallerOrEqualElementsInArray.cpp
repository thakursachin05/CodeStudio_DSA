#include<bits/stdc++.h>
int lowerbound(int *arr,int n,int key){
    int s = 0;
    int e = n-1;
    int index = 0;
    
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            index = mid;
            s = mid+1;
        }
        else if(arr[mid]<key){
            index = mid;
            s = mid+1;
        }
        else e = mid-1;
    }
    return index;
}

vector < int > countSmallerOrEqual(int * a, int * b, int n, int m) {
    sort(b,b+m);
    vector<int> res;
    for(int i=0;i<n;i++){
        int index = lowerbound(b,m,a[i]);
        if(b[index]<=a[i]) index++;
        res.push_back(index);
    }
    return res;
}