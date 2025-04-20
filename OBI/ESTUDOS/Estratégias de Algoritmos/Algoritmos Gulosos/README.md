# ALGORITMOS GULOSOS

Um algoritmo é dito guloso quando escolhe uma opção a qual se parece ser a melhor no momento(escolha ótima), e espera que dessa forma consiga-se chegar a uma solução globalmente ótima. Os algoritmos gulosos tomam decisões com base apenas na informação disponível sem se preocupar com as consequências futuras, ou seja, eles não voltam atrás de uma decisão tomada.

## Exemplificação

Imagine que você é um atendente de um supermercado e precisa retornar o troco para um determinado cliente. Você tem os seguintes valores disponíveis {1, 0.25, 0.10, 0.5} centavos.

`Entrada: $2,45`

```
x = 2,45
n = 0

se x >= 1
    n += x // 1
    x = x % 1
n = 2
x = 0.45

se x >= 0.25
    n += x // 0.25
    x = x % 0.25
n = 3
x = 0.20

se x >= 0.10
    n += x // 0.10
    x = x % 0.10
n = 5
x = 0

```

`Saída: 5`

De forma geral, agimos tal como um algoritmo guloso: em cada estagio adicionamos ´
a moeda de maior valor poss´ıvel, de forma a nao passar da quantia necess ˜ aria.

## Exemplos

Considere o problema onde você precisa realizar algumas tarefas e você possui `x` minutos para se realizá-las. Existem `N` tarefas e cada uma requer `Ni` minutos para serem concluídas. Qual o número máximo de tarefas que você pode finalizar?

`entrada` : `x = 15, N = 6, Ni = {4, 3, 8, 4, 7, 3}`

Intuitivamente basta percorrer `Ni` e somar de forma linear até chegar a um valor `<= x`.

Mas, se reorganizarmos o vetor, podemos aumentar a quantidade de tarefas realizadas, priorizando as mais simples (que consomem menos tempo).

`{3, 3, 4, 4, 7, 8}`

`3 + 3 + 4 + 4 = 14`, ou seja, 4 tarefas.

```c++
#include<iostream>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    string line;
    vector<int> Ni;
    int x, n, r = 0;

    getline(cin, line);
    cin >> x;

    istringstream iss(line);
    while(iss >> n) {
        Ni.push_back(n);
    }

    sort(Ni.begin(), Ni.end());
    while(x > 0 && x >= Ni[r]) {
        x -= Ni[r];
        r++;
    }

    cout << r << endl;

    return 0;
}
```

## Como identificar se um problema pode ser resolvido com algoritmo guloso?

Você deve verificar se o problema atende essas duas propriedades `Sobestrutura ótima` e `Escolha gulosa`

-   ### Sobestrutura ótima

    A solução ótima do problema pode ser construída a partir das soluções ótimas dos subproblemas.

    Ou seja, se resolver bem partes pequenas do problema te leva à melhor solução global.

    Um bom exemplo disso é no problema das tarefas: Se você sempre escolher as tarefas mais curtas primeiro (escolha ótima local), vai realizar mais tarefas no final (solução ótima global).

    ```c++
    sort(Ni.begin(), Ni.end());
    ```

-   ### Escolha gulosa

    Você pode tomar decisões locais (passo a passo) que levam à solução global ótima sem precisar rever suas escolhas anteriores.

    ```c++
    while(x > 0 && x >= Ni[r]) {
        r++; //nunca voltamos em uma mesma moeda!
    }
    ```

## Extras

https://medium.com/algorithms-and-leetcode/greedy-algorithm-explained-using-leetcode-problems-80d6fee071c4
