#include <stdio.h>
#include <stdlib.h>

int b_search(int arr[], int size, int x) {
    int left = 0;
    int right = size - 1;

    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(arr[mid] == x) return mid;
        else if(arr[mid] < x) left = mid + 1;
        else right = mid - 1;
    }

    return -1;
}

int main() {
    int arr[] = {1,2,3,4,5,7,8,9,10,11,12,13,14};
    
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("%d\n", b_search(arr, n, 2));

    return 0;
}