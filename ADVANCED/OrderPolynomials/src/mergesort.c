#include<stdlib.h>
#include<stdio.h>
#include "includes/mergesort.h"

/*
MERGING TWO ARRANGEMENTS IN AN ORDERED WAY
*/
static void merge(int arr[], int begin, int mid, int end) {
    int* arr_aux = (int*)malloc((end - begin) * sizeof(int));

    if(arr_aux == NULL) {
        printf("[merge] -> Erro ao alocar memória!");
        exit(1);
    }

    int i = begin, j = mid, k = 0;
    
    while(i < mid && j < end) {
        if(arr[i] < arr[j]) arr_aux[k++] = arr[i++];
        else arr_aux[k++] = arr[j++];
    }

    while(i < mid) arr_aux[k++] = arr[i++];

    while(j < end) arr_aux[k++] = arr[j++];

    for(i = begin, k = 0; i < end;) arr[i++] = arr_aux[k++];

    free(arr_aux);
}

/*
USING DIVISION AND CONQUEST TO ORDER ARRAY
*/
void sort(int arr[], int begin, int end) {
    if(begin < end - 1) {
        int mid = (begin + end) / 2;
        sort(arr, begin, mid);
        sort(arr, mid, end);
        merge(arr, begin, mid, end);
    }
}