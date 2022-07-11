int binary_search(int* arr, int start, int end, int key) {
  
  if (start > end) {
    return -1;
  }

  int mid = start + (end - start) / 2;

  if (arr[mid] == key) {
    return mid;
  }

  if (arr[start] <= arr[mid] && key <= arr[mid] && key >= arr[start]) {
    return binary_search(arr, start, mid-1, key);
  }

  else if (arr[mid] <= arr[end] && key >= arr[mid] && key <= arr[end]) {
    return binary_search(arr, mid+1, end, key);
  }

  else if (arr[end] <= arr[mid]) {
    return binary_search(arr, mid+1, end, key);
  }

  else if (arr[start] >= arr[mid]) {
    return binary_search(arr, start, mid-1, key);
  }

  return -1;
}

int search(int* arr, int n, int key) {
    return binary_search(arr,0,n-1,key);
}