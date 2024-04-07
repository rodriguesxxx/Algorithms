#include <stdio.h>

#define ARRAY_SIZE(arr) (sizeof(arr)) / sizeof((arr)[0])

int max(int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int min(int arr[], int size) {
    int min = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

void remove(int index, int *arr, int size) {
    for(int i = index + 1; i < size; ++i) {
        arr[i-1] = arr[i];
    }
}

int sort(int arr[], int size) {
    int sorted_arr[size];
    size--;
    do {

    } while(size >= 0);

    return 0;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    remove(2, arr, ARRAY_SIZE(arr));
    remove(3, arr, ARRAY_SIZE(arr));

    for(int i = 0; i < ARRAY_SIZE(arr); ++i) {
        printf("%d\n", arr[i]);
    }
    //printf("%d \n", max(arr, ARRAY_SIZE(arr)));
    return 0;
}
