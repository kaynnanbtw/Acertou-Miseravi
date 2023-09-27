# Acertou Miseravi

## Introdução
Este código em C se refere ao projeto #1 da disciplina de PC1 e implementa três operações básicas sobre números inteiros: adição, subtração e multiplicação. As operações são realizadas com números inteiros arbitrariamente grandes.

## Especificações
O código está contido em um único arquivo fonte e utiliza funções para modularizar as operações.

### Entrada
A entrada consiste em um número inteiro `n`, que representa a quantidade de casos de teste, seguido por `n` linhas, cada uma contendo três inteiros:
- `a` e `b` são os operandos das operações.
- `o` é um inteiro que indica a operação a ser realizada:
  - Se `o = 1`, os números `a` e `b` são somados (`a + b`).
  - Se `o = 2`, `b` é subtraído de `a` (`a - b`).
  - Se `o = 3`, `a` é multiplicado por `b` (`a * b`).

### Restrições
- `n` está no intervalo de 1 a 103.
- `a` e `b` estão no intervalo de -10500 a 10500.
- `o` está no intervalo de 1 a 3.

### Saída
Para cada pergunta, o resultado da operação é impresso em uma linha.

## Funções
O código contém três funções para realizar as operações:

#### Função `adicao`
```c
long long int adicao(long long int a, long long int b);
```
Esta função recebe dois números inteiros `a` e `b` e retorna a soma deles.

#### Função `subtracao`
```c
long long int subtracao(long long int a, long long int b);
```
Esta função recebe dois números inteiros `a` e `b` e retorna a subtração de `b` de `a`.

#### Função `multiplicacao`
```c
long long int multiplicacao(long long int a, long long int b);
```
Esta função recebe dois números inteiros `a` e `b` e retorna o resultado da multiplicação de `a` por `b`.

## Função `main`
A função `main` é o ponto de entrada do programa. Ela lê o número de casos de teste `n`, lê os operandos `a`, `b` e o operador `o` para cada caso de teste e, com base em `o`, chama a função apropriada (`adicao`, `subtracao` ou `multiplicacao`) para calcular o resultado e imprime-o na saída padrão.

## Exemplo
O exemplo fornecido demonstra a entrada e saída esperada do programa para ilustrar seu funcionamento.

## Uso
Para usar o código, basta compilar e executar em um ambiente de desenvolvimento C, fornecendo a entrada conforme as especificações do projeto.
