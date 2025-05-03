# Matemática Discreta

## Ordem Lexicográfica

É a ordem em que as palavras aparecem em um dicionário. **Não é a ordem alfabética!**

## Definindo Ordem Lexicográfica

Cada caracter é representado por um `byte(0, 255)`. Isso permite comparar caracteres e dizer se um é maior ou menor que o outro.

## s1 < s2

Dizemos que uma string é lexicográficamente menor que outra se o primeiro caracter diferente entre elas for menor que o outro.

```
se s1[k] != s2[k] e s1[k] < s2[k]
    |-> s1 < s2 <-|
```

**Algoritmo para determinar a maior e a menor string**

```c
#include<stdio.h>

int strcompare(const char *s1, const char *s2) {
    while(*s1 && (*s1 == *s2)) s1++, s2++;

    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

const char* max(const char *s1, const char *s2) {
    const char *copy_s1 = s1;
    const char *copy_s2 = s2;

    return strcompare(s1, s2) >= 0 ? s1 : s2;
}

const char* min(const char *s1, const char *s2) {
    return max(s1, s2) == s1 ? s2 : s1;
}

int main() {
    char s1[] = {"Amor"};
    char s2[] = {"Odio"};

    printf("%s\n", max(s2, s1));
    printf("%s\n", min(s1, s2));

    return 0;
}
```
