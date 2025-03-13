#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//0(n²)
void sort(int numbers[], size_t n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1; j++) {
            if(numbers[j] > numbers[j+1]) {
                int aux = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = aux;
            }
        }
    }
}

void set_numbers(char *line, int numbers[]) {
    for(int i = 0, j = 0; i < strlen(line) && j < strlen(line) / 2; i++) {
        if(line[i] != ',') {
            numbers[j] = line[i] - '0';
            j++;
        }
    }
}

int main() {
    char *line = NULL;
    size_t len = 0;

    printf("Ex:(x|x sendo x < 10 e x seperado por ','): \n");
    getline(&line, &len, stdin);

    size_t n = (int) strlen(line) / 2;
    int numbers[n];
    
    set_numbers(line, numbers);

    sort(numbers, n);

    for(int i = 0; i < n; i++) {
        if(i == n - 1) {
            printf("%d\n", numbers[i]);
        } else {
            printf("%d,", numbers[i]);
        }
    }

    return 0;
}