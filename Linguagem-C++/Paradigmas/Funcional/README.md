## O que programação Funcional?

É um paradigma de programação que enfatiza o uso `funções matemáticas`, evitando estados ou dados mutáveis. Utilizando expressões ao invés de comandos, as expressões são utilizadas para cálculo de valores com dados imutáveis. Essa função pode ter ou não parâmetros e um simples valor de retorno.

## Valores vs. Identidades

Os `valores` são dados que representam uma quantidade ou uma informação.

Por exemplo:

```cpp
const int myAge = 17;
```

Uma característica dos valores é que eles são imutáveis, o que não se aplica para idades(Como queria ter 17 anos para sempre kkkkkk)

---

As `identidades` refere-se a variáveis ou entidades que podem ter valores atribuídos a elas.

Por exemplo:

```cpp
string myFavoriteSong {"Can You Hear"};
```

Ao longo do tempo esse valor pode mudar.

```cpp
myFavoriteSong = "Mc Marcinho - Glamurosa";
```

## Tipos de Valor

Quando se trabalha com tipos de valores, a identidade da variável é representada diretamente pelo próprio valor.
Os tipos são passados por cópia, o que significa que quando você atribui um valor a uma nova variável ou o passa para um função, uma cópia do valor é criada.

Exemplo:

```cpp
void Cristiano()
{
    for (int i = 0; i < 10; ++i) {
        Ronaldo(i);
    }
}

void Ronaldo(int x)
{
    cout << x << " ";

    //note que isso não afeta o valor na qual o i se refere.
    x += 1;
}

//OUTPUTS:
// 0 1 2 3 4 5 6 7 8 9
```
