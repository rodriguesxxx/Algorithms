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

Existem várias operações primitivas que podemos aplicar a uma árvore binária.

-   ### makeTree(x)

    Cria uma árvore binária consistindo num único nó com o campo x.

    ```cpp
    Tree* Tree::makeTree(int x) {
      return new Tree(x);
    }
    ```

-   ### getFather(node)

    Retorna o pai do nó.

    ```cpp
    Tree* Tree::makeTree(Tree*& tree, int x) {
      if(tree == nullptr) {
        tree = new Tree(x);
        tree->parent = this;
        return tree;
      }
      return nullptr;
    }

    Tree* Tree::getFather() {
      return this->parent;
    }
    ```

-   ### isLeft(node)

    Verifica se o valor esquerdo do pai é igual ao nó `se pai.esquerda == nó, retorna verdade`.

    ```cpp
    bool Tree::isLeft() {
      if(this->parent == nullptr) return false;
      if(this->parent->left == this) return true;
      return false;
    }
    ```

-   ### isRight(node)

    Verifica se o valor direito do pai é igual ao nó `se pai.direita == nó, retorna verdade`.

    ```cpp
    bool Tree::isRight() {
      if(this->parent == nullptr) return false;
      if(this->parent->right == this) return true;
      return false;
    }
    ```

-   ### getBrother(node)

    Retorna o irmão do nó. Caso o nó seja o direito, retorna o nó esquerdo, e vice-versa.

    ```cpp
    Tree* Tree::getBrother() {
      if(this->isLeft()) return parent->right;
      if(this->isRight()) return parent->left;
      return nullptr;
    }
    ```
