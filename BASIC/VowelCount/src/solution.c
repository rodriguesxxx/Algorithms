#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

static void strlower(char *str) {
    while(*str) {
        *str = tolower((unsigned char) *str);
        str++;
    }
}

//O(n²)
static int strcount(char *str, char* s) {
    int count = 0;
    for(int i = 0; i < strlen(str); i++) {
        for(int j = 0; j < strlen(s); j++) {
            if(str[i] == s[j]) count++;
        }
    }

    return count;
}

int count(char *str) {
    strlower(str);

    char vowels[] = "aeiou";

    return strcount(str, vowels);
}

int main() {

    char *str = NULL;
    size_t len = 0;
    
    getline(&str, &len, stdin);
    
    printf("%d\n", count(str));
    
    return 0;
}