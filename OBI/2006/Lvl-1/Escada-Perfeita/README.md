# Escada perfeita - OBI2006

Uma construtora, durante a criação de um parque temático, encontrou no terreno um conjunto de vários pilhas de cubos de pedra. Ao invés de pagar pela remoção dos cubos de pedras, um dos arquitetos da empresa achou interessante utilizar as pedras para decoração do parque, determinando que as pedras fossem re-arranjadas no formato de “escada“ . Para isso, os funcionários deveriam mover alguns cubos para formar os degraus das escadas. Só que o arquiteto decidiu que, entre uma pilha c outra de pedras deveria haver exatamente uma pedra de diferença, formando o que ele chamou de escada perfeita. O exemplo abaixo mostra um conjunto de cinco pilhas de pedras encontradas e as cinco pilhas como ficaram após a arrumação em escada perfeita.

<img src="https://d33wubrfki0l68.cloudfront.net/3e092e0eac696da8977a26575b88275b57f2d00b/3765c/wp-content/uploads/2007/06/ilustraescada1.gif"/>

Dada uma sequência de pilhas de cubos de pedras com suas respectivas alturas, você deve determinar o número mínimo de pedras que precisam ser movidas para formar uma escada perfeita com exatamente o mesmo número de pilhas de pedras encontrado inicialmente (ou seja, não devem ser criadas ou eliminadas pilhas de pedras). O degrau mais baixo da escada deve sempre estar do lado esquerdo.

### Entrada

A entrada contém um único conjunto de testes, que deve ser lido do dispositivo de entrada padrão (normalmente o teclado). A primeira linha contém um inteiro N que indica o número de pilhas de pedras. A segunda linha contém N números inteiros que indicam a quantidade de cubos de pedras em cada uma das pilhas, da esquerda para a direita.

### Saída

Seu programa deve imprimir uma única linha, contendo um único inteiro: o número mínimo de cubos de pedras que devem ser movidos para transformar o conjunto de pilhas em uma escada perfeita, conforme calculado pelo seu programa. Caso não seja possível efetuar a transformação em escada perfeita, imprima como resultado o valor -1.

## Exemplos

|   |   |
|---|---|
|**Entrada**<br><br>5<br>5 4 5 4 2|**Saída**<br><br>5|

|  |  |
| ---- | ---- |
| **Entrada**<br><br>6<br>9 8 7 6 5 4 | **Saída**<br><br>9 |

|   |   |
|---|---|
|**Entrada**<br><br>2<br>1 5|**Saída**<br><br>-1|

# Vamos a solução

Sabemos que a `escada perfeita` aumenta de `1` em `1`. Isso significa que ela é uma `PA`de razão `1`.

## Um pouco sobre Progressão Aritmética - PA

Uma `prograssão aritmética` é uma `sequência númerica` em que cada termo, partir do `segundo` é a `soma do termo anterior` com uma `constante R`

- #### Exemplo de PA

	{2, 3, 4, 5, 6} O primeiro termo é o `2`e a `razão` é `1`. 
	
- #### Fórmula

		`an = a1 + (n - 1).r`
		
		{2, 3, 4, 5, 6} = 2 + (3...n - 1) . 1
		
- #### Soma de PA

	Para encontrarmos a `soma` de determinado `intervalo` em uma PA podemos utilizar a `fórmula`
	
		`Sn = n/2 . (a1 + an)`

	 - `n` = Tamanho intervalo.
	 - `a1` = Posição do inicial na PA.
	 - `an` = Posição do intervalo na PA.

	 **Exemplo de soma**:
	 
	 Dada a seguinte `PA`= {2, 4, 6, 8, 10}, de `razão`igual a `2`.
	 Determine a soma dos `3` primeiros valores dessa `PA`.

	 `Valores` = {2, 4, 6}
	 `n` = 3
	 `a1` = 2 
	 `a3` = 6 
	 `s` = 3/2 . (2 + 6) -> 12

### Lógica da Solução

- Sabemos quanto vale o `n`(o numero de pilhas) a partir dele conseguimos calcular a soma dessa `PA`, basta realizar um `loop`.
- Sabemos que a razão é `1`. Pois a escada deve aumentar de `1`em `1`degrau.
- Utilizaremos as seguintes `equações` para calcularmos o valor `inicial`e `final`da `PA`

	 `somaPA` = Utilizar for()
	 `valorFinal` = ( ( somaPA . 2 / n ) + n - 1 ) / 2
	 `valorInicial` = valorFinal - n + 1