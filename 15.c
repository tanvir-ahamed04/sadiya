#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x) {
    while(l <= r) {
        int mid = l + (r - l) / 2;
        if(arr[mid] == x) return mid;
        if(arr[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    printf("Enter element to search: ");
    scanf("%d", &x);
    
    int result = binarySearch(arr, 0, n - 1, x);
    if(result == -1) printf("Not found\n");
    else printf("Found at index %d\n", result);
    return 0;
}