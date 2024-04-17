#include <stdio.h>
#include <stdlib.h>

//TODO: validar se ultimo digito é igual a C
int main() {
    int c;
    printf("C: (ex: 555) -> ");
    scanf("%i", &c);
    if(c % 3 == 0) {
        int abc = c / 3;
        printf("ABC = %i\n", abc);
    } else {
        printf("No valid response!!!\n");
    }

    return 0;
}
