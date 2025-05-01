# ÁRVORE BINÁRIA

Uma árvore binária é um conjunto finito de elementos que pode estar vázio ou particionado em três subconjuntos disjuntos.

```
S = {{A} : {{B}, {C}}}

   {A}
   / \
 {B} {C}
```

O primeiro subconjunto contém um único elemento, chamado raiz da árvore. Os outros dois subconjuntos são chamados de subárvore a esquerda e direita.

```
__________________________________________
S = {A: {10} : {B: {8, {1, 9}}, {11, {}}}}
__________________________________________

        10
       /  \
      8   11
     / \
    1   9
_____________________________________________
B: subárvore a esquerda(por ser menor que 10)
_____________________________________________
C: subárvore a direita(por ser maior que 10)
_____________________________________________
```

Cada elemento de uma árvore binária é chamado de nó [`10`, `8`, `11`, `1`, `9`].

Os nós sem filhos são chamados de folhas [`1`, `9`, `1`]

## Árvore estritamente binária

Se todo nó que não é folha tiver subárvores esquerda e direita não vázios, a árvore será **estritamente binária**

```
__________________________________________
S = {A: {10} : {B: {8, {1, 9}}, {11, {2, 22}}}}
__________________________________________

        10
       /  \
     8     11
    / \   /  \
   1   9 2   22
```

Uma árvore binária com `n` folhas terá sempre `2n` de nós.

Uma árvore binária **estritamente binária** com `n` folhas terá sempre `2n - 1` de nós.

## Operações sobre árvores binárias

