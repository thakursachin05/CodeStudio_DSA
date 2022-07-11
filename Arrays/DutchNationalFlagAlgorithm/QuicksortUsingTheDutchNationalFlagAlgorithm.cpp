#include<bits/stdc++.h>
pair<int,int> sort(vector<int> &arr, int low,int high)
{
    int mid = low;
    int x = arr[high];
    
    while(mid<=high){
        if(arr[mid]<x){
            swap(arr[mid++],arr[low++]);
        }
        else if(arr[mid]==x) mid++;
        else {
            swap(arr[mid],arr[high--]); 
        }
    }
    
    return {low-1,mid};
}


void quickSort(vector<int> &arr,int low,int high){
    if(low>=high) return;
    
    if(high-low==1){
        if(arr[high]<arr[low]) swap(arr[low],arr[high]);
        return;
    }
    
    pair<int,int> pivot = sort(arr,low,high);
    
    quickSort(arr,low,pivot.first);
    quickSort(arr,pivot.second,high);
}

vector<int> quickSortUsingDutchNationalFlag(vector<int> &arr)
{   quickSort(arr,0,arr.size()-1);
     return arr;
    
}