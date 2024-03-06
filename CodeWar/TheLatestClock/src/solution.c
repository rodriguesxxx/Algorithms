#include <stdio.h>

int min(int numbers[], int size) {
  int minValue = numbers[size-1];
  for(int i = 0; i < size; i++) {
    if(numbers[i] < minValue) {
      minValue = numbers[i];
    }
  }
  return minValue;
}

int max(unsigned x, unsigned y) {
  return x > y ? x : y;
}

void late_clock(unsigned a, unsigned b, unsigned c, unsigned d, char *latest) {  
  
}

int main() {
    int n[3] = {5, 3, 4};
    printf("%d", min(n, 3));
    return 0;
}