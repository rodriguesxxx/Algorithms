#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

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
static void sort(int arr[], int begin, int end) {
    if(begin < end - 1) {
        int mid = (begin + end) / 2;
        sort(arr, begin, mid);
        sort(arr, mid, end);
        merge(arr, begin, mid, end);
    }
}

// static struct Term* solve_similar_terms(struct Term* terms, int* n_terms) {
//     int n = *n_terms;
//     printf("%d\n", n);
//     //TODO: Percorrer todos os termos e solucionar termos semelhantes, recriar vetor de termos.
    
//     return terms;
// }

struct Term* get_terms(char *expression, int size_terms) {
    

    struct Term* terms = (struct Term*)malloc(size_terms * sizeof(struct Term));

    if(terms == NULL) {
        printf("[get_terms] -> Erro ao alocar memória!");
        exit(1);
    }

    //3x+x^3-4+3x^3
    for(int i = 0; i < strlen(expression); ++i) {
        char* coef_str;
        char* vars;
        int degree = 0;    

        if(expression[i] == '^') degree = isdigit(expression[i+1]) ? expression[i+1] : degree;

        if(isdigit(expression[i]) && 
            (i > 0 && expression[i - 1] != '^') 
        ) {
            strcat(coef_str, (char*)expression[i]);
        }
        
        if(!isdigit(expression[i]) && expression[i] != '^') (char*)strcat(vars, expression[i]);


        if(expression[i] == '+' || expression[i] == '-') {
            struct Term term;

            term.sign = expression[i];
            term.coef = (int)coef_str;
            term.vars = vars;

            terms[i] = term;
        }

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

    struct Term* terms = get_terms(expression, n), n_terms;
    
    return terms;
}

char* order(char *expression) {
    
    int n_terms;
    struct Term* terms = process_expresion(expression, n_terms);
    
    for(int i = 0; i < n_terms; ++i) {
        printf("%d\n", terms[i].coef);
    }

    free(terms);

    return expression;
}

int main() {
    
    char polynomial[100] = {"3x + x^3 - 4 + 3x^3"};

    // printf("Polinômio: ");
    // fgets(polynomial, sizeof(polynomial), stdin);
    // polynomial[strcspn(polynomial, "\n")] = 0;

    printf("%s\n", order(polynomial));

    return 0;
}