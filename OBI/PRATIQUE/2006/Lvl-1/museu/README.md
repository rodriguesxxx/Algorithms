# Museu

Desde que o arquiteto Frank Gehry projetou o Museu Guggenheim de Bilbao, os museus têm sido construídos com formas cada vez mais complexas, fugindo de padrões pré-estabelecidos e de simetrias. Um típico museu moderno é composto por um conjunto de salas ligadas por corredores e escadas, sem preocupação com a pré-definição de caminhos a serem seguidos pelas pessoas.

Henriqueta é uma professora do ensino fundamental que deseja visitar o museu da Ordem Brasileira de Medicina (OBM) para mostrar aos seus alunos de ciências como o corpo humano funciona e como as cirurgias eram feitas nos séculos XIX e XX. Henriqueta quer planejar uma visita pelas salas do museu, obedecendo às seguintes restrições:

-   a visita deve começar e terminar em uma mesma sala;
-   exceto a sala de partida, nenhuma sala do museu pode ser visitada mais de uma vez;
-   a visita deve incluir pelo menos duas salas;
-   os corredores são unidirecionais, ou seja, as pessoas podem caminhar, em um corredor, apenas em uma direção.
-   a visita deve tomar o menor tempo possível.

Um estudo preliminar, realizado pelo próprio museu, indica o tempo médio que cada visitante fica em uma sala e quanto tempo demora para atravessar um corredor ou uma escada. Henriqueta quer a sua ajuda para calcular o tempo total da menor visita que ela pode efetuar, obedecendo às restrições dadas.

Escreva um programa que, dados um conjunto de salas, um conjunto de corredores e escadas que ligam essas salas e o tempo necessário para percorrer cada sala e cada corredor, determine qual é o menor tempo possível para uma visita. Note que o tempo de visita da sala onde a visita se inicia deve ser contado apenas uma vez.

## Entrada

A primeira linha da entrada contem dois inteiros S e C, que indicam, respectivamente, o número de salas e o número de corredores. As salas são numeradas de 1 a S. Cada uma das C linhas seguintes descreve um corredor ou escada. A descrição é composta por três inteiros, I, F e T, indicando que o corredor somente pode ser percorrido da sala I para a sala F no tempo T.

## Saída

Seu programa deve imprimir uma única linha contendo o tempo gasto na visita de menor duração que Henriqueta pode realizar no museu. Existe pelo menos uma visita que atende às restrições impostas.

## Exemplos

    2 2
    1 1
    1 2 1
    2 1 3

output >> 6
