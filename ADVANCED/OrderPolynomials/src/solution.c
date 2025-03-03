#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include "includes/mergesort.h"

struct Term {
    int coef; //default: 1
    char *vars; //default: ''
    char sign; //default: '+'
    int degree; //default: vars == '' ? 0 : [1...9]
};

/*
REMOVE SPACE OF STRING
*/
static void strrmv(char *s, char c) {
    int i, k = 0;
    for(i = 0; s[i]; i++) {
        if(s[i] != c) {
            s[k++] = s[i];
        }
    }
    s[k] = 0;
}

/*
COUNTING HOW MANY TIMES A CHARACTER APPEARS IN THE STRING
*/
static int strcount(char *s, char c1, char c2) {
    int i, count = 0;
    for(i = 0; i < strlen(s); i++) {
        if(s[i] == c1 || s[i] == c2) {
            count++;
        }
    }
    return count;
}

static void charcat(char* str, char c) {
    char buffer[9];
            
    buffer[0] = c;
    buffer[1] = '\0';

    printf("[charcat][c] %c\n", c);

    strcat(str, buffer);

    printf("[charcat][str] %s\n", str);

}

// static struct Term* solve_similar_terms(struct Term* terms, int* n_terms) {
//     int n = *n_terms;
//     printf("%d\n", n);
//     //TODO: Percorrer todos os termos e solucionar termos semelhantes, recriar vetor de termos.
    
//     return terms;
// }

struct Term* get_terms(char *expression, int n_terms) {
    

    struct Term* terms = (struct Term*)malloc(n_terms * sizeof(struct Term));

    if(terms == NULL) {
        printf("[get_terms] -> Erro ao alocar memória!");
        exit(1);
    }

    //3x+x^3-4+3x^3
    for(int i = 0; i < strlen(expression); ++i) {
        char coef_str[9];
        char vars[3]; //x,y,z
        int degree = 0;    

        printf("[get_terms][exp[i]]: %c\n", expression[i]);

        if(expression[i] == '^') {
            degree = isdigit(expression[i+1]) ? expression[i+1] : degree;
        }

        if(!isdigit(expression[i]) && expression[i] != '^' && expression[i] != '+' && expression[i] != '-') {
            charcat(vars, expression[i]);
            printf("[get_terms][vars]: %s\n", vars);
        }

        if(expression[i] == '+' || expression[i] == '-') {
            struct Term term;

            term.sign = expression[i];
            term.degree = degree;
            strcpy(term.vars, vars);
            // term.coef = isdigit(coef_str) ? (int)coef_str : 1;
            printf("[get_terms][term.degree]: %d\n", term.degree);
            printf("[get_terms][term.vars]: %s\n", term.vars);
            // terms[i] = term;

        }

        // if(isdigit(expression[i]) && 
        //     (i > 0 && expression[i - 1] != '^') 
        // ) {
        //     strcat(coef_str, (char*)expression[i]);
        // }
    }

    //TODO: Pegar termos da expressao e registrar no vetor

    // strcpy(term.exp, "test");
    
    // term.sign = '+';
    
    // term.degree = 0

    return terms;
}

static struct Term* process_expresion(char *expression, int n_terms) {
    
    strrmv(expression, ' ');
    
    //TODO: melhorar fluxo
    
    int n = strcount(expression, '+', '-');
    n = (n * 2 - n) + 1;
    
    n_terms = n;

    struct Term* terms = get_terms(expression, n_terms);
    
    return terms;
}

char* order(char *expression) {
    
    int n_terms;
    struct Term* terms = process_expresion(expression, n_terms);
    
    // for(int i = 0; i < n_terms; ++i) {
    //     printf("%d\n", terms[i].coef);
    // }

    free(terms);

    return expression;
}

int main() {
    
    char polynomial[100] = {"3x + x^3 - 4 + 3x^3"};
    
    int arr[] = {4, 2, 3, 1};
    sort(arr, 0, 4);
    for(int i = 0; i < 4; i++) {
        printf("%d\n", arr[i]);
    }
    // printf("Polinômio: ");
    // fgets(polynomial, sizeof(polynomial), stdin);
    // polynomial[strcspn(polynomial, "\n")] = 0;
    // order(polynomial);

    return 0;
}