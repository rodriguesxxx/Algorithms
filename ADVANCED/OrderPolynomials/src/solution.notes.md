```json
3x + x^3 - 4 + 3x^3
```

**primeiro passo:** remover espaços

```json
3x+x^3-4+3x^3
```

**segundo passo:** separar termos

Sempre depois dos operadores de +/- havera um termo

```json
//utilizar struct
[
    {
        "term": "3x",
        "sign": "+", //+3x, por não ter sinal explicito
        "degree:": null
    },
    {
        "term": "x³",
        "sign": "+",
        "degree:": null
    },
    {
        "term": "4",
        "sign": "-",
        "degree:": null
    },
    {
        "term": "3x³",
        "sign": "+",
        "degree:": null
    },
]
```


**terceiro passo:** resolver termos semelhantes
```
3x + x^3 - 4 + 3x^3
```

```
x³ + 3x³ -> 4x³
```

```
3x - 4 + 4x³
```

Percorrer cada termo e verificar se é semelhante ao outro termo, caso seja semelhante, resolver. Após isso, adicionar o termo em um novo vetor de termos.

```json
[
    {
        "term": "3x",
        "sign": "+",
        "degree:": null
    },
    {
        "term": "x³",
        "sign": "+",
        "degree:": null
    },
    {
        "term": "4",
        "sign": "-",
        "degree:": null
    },
    {
        "term": "3x³",
        "sign": "+",
        "degree:": null
    },
]
```

```json
[
    {
        "term": "3x",
        "sign": "+",
        "degree:": null
    },
    {
        "term": "4",
        "sign": "-",
        "degree:": null
    },
    {
        "term": "4x³",
        "sign": "+",
        "degree:": null
    },
]
```

**quarto passo:** definir graus

Criar função que receba um termo e retorne seu grau.

Percorrer todos os termos e definir o seu grau

```json
[
    {
        "term": "3x",
        "sign": "+",
        "degree:": 1 //x sem exp
    },
    {
        "term": "4",
        "sign": "-",
        "degree:": 0 //não está acompanhado de variavel
    },
    {
        "term": "4x³",
        "sign": "+",
        "degree:": 3 //x elevado ao expoente 3
    },
]
```

**_Possivel caso_**
```json
{
        "term": "2x4y²",
        "sign": "+",
        "degree:": 3 //x ^ 1, y ^ 2 -> 1 + 2 = 3 
},
```

**quinto passo:** ordenar termos

Percorrer termos e ordenar do maior ao menor grau(MergeSort)

```json
[
    {
        "term": "4x³",
        "sign": "+",
        "degree:": 3 
    },
    {
        "term": "3x",
        "sign": "+",
        "degree:": 1 
    },
    {
        "term": "4",
        "sign": "-",
        "degree:": 0 
    },
    
]
```

**montar expressão:** Criar função que receba os termos e retorne a expressão resultante

```json
[
    {
        "term": "4x³",
        "sign": "+",
        "degree:": 3 
    },
    {
        "term": "3x",
        "sign": "+",
        "degree:": 1 
    },
    {
        "term": "4",
        "sign": "-",
        "degree:": 0 
    },
    
]
```

```
4x3 + 3x - 4
```
