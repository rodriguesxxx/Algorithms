#include <stdio.h>
#include <stdlib.h>

int search(int arr[], size_t size, int x) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == x) return i;
    }
    
    return -1;
}

void insert(int **arr, size_t *size, int x) {
    if(search(*arr, *size, x) != -1) return;
    
    *arr = (int *) realloc(*arr, (*size + 1) * sizeof(int));

    (*arr)[*size] = x;
    
    (*size)++;
}

int main() {
    size_t size = 0;
    int *arr = NULL;

    insert(&arr, &size, 1);
    insert(&arr, &size, 1);
    insert(&arr, &size, 2);
    insert(&arr, &size, 3);

    for(int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    } 

    free(arr);
}