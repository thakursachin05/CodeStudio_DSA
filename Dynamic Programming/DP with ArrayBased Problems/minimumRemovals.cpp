// https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118824/offering/1381992

#include <bits/stdc++.h>

int findEndIndex(vector<int>& arr, int key, int i, int n, int k)
{
    int index = -1;
    int start = i + 1;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if(arr[mid] - key <= k)
        {
            index = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return index;
}


int minimumRemovals(vector<int>& arr, int n, int k)
{
    sort(arr.begin(), arr.end());

    int ans = n - 1;

    for(int start = 0; start < n; start++)
    {
        int endIndex = findEndIndex(arr, arr[start], start, n, k);

        if(endIndex != -1)
        {
            ans = min(ans, n - (endIndex - start + 1));
        }
    }

    return ans;
}

