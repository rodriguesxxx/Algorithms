## Jogo de Cartas

Marlene está jogando um passatempo de sua autoria. Ela possui um baralho com N cartas, numeradas de 1 a N, tal que não existem duas cartas com o mesmo número. O jogo consiste de várias rodadas, e são utilizadas três pilhas denominadas Compra, Descarte e Morto.

Inicialmente, as cartas são embaralhadas e colocadas com a face para cima, constituindo a pilha Compra (as pilhas Descarte e Morto estão inicialmente vazias). Marlene então tira as cartas da pilha Compra, uma a uma, e as coloca na pilha Descarte, com as faces para baixo, na mesma ordem, até encontrar a carta com o número 1. Quando a encontra, Marlene a coloca na pilha Morto e recomeça o processo de retirar cartas da pilha Compra, agora procurando a próxima carta na sequência (2), e o processo e repetido para as outras cartas na sequência (3, 4, ...).

Quando as cartas da pilha Compra terminam, encerra-se uma rodada. Nesse momento, Marlene vira a pilha Descarte de modo que as cartas fiquem com a face para cima (sem re-embaralhar) e a coloca no lugar da pilha Compra. Inicia-se uma nova rodada, e processo recomeça, com Marlene procurando a próxima carta na sequência. Repete-se esse processo até que a carta removida do baralho seja a de número N, quando o jogo acaba. O resultado do jogo é o número de rodadas.

### Primeira Rodada

    Compra	Descarte	Morto
    1	3	2
    3	2					1
    2			3			1
                3			1	2

### Segunda Rodada

    Compra	Descarte	Morto
    3						1	2
                            1	2	3

Escreva um programa que, dada a ordem em que as cartas estão na pilha Compra no início do jogo, determine o número de rodadas do jogo.
Entrada

A primeira linha da entrada contém um inteiro N que indica quantas cartas existem no baralho. A segunda linha contém N inteiros, representando as cartas do baralho, na sequência em que serão tiradas por Marlene da pilha Compras.
Saída

Seu programa deve imprimir uma única linha, contendo um único inteiro, o número de rodadas do jogo.

## Exemplos

### Entrada

    3
    2 1 3

### Saída

    2
