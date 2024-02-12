# Lógica de Programação em C
Códigos simples desenvolvidos em sala de aula para aprender lógica de prpgramação.

## Tipos de Variáveis
### 1. Inteiro
São usadas para armazenar números inteiros. Elas podem representar valores positivos, negativos ou zero. 
O tamanho de um int pode variar dependendo da plataforma, mas geralmente é de 4 bytes em sistemas de 32 bits e 8 bytes em sistemas de 64 bits.
```
int idade = 30;
```

### 2. Real
São usadas para armazenar números de ponto flutuante, ou seja, números com uma parte decimal. O tipo float é geralmente de 4 bytes e double é geralmente de 8 bytes. Double oferece mais precisão do que float.
```
float altura = 1.75;
double peso = 68.5;
```

### 3. Caractere
São usadas para armazenar caracteres individuais. Cada char é armazenado em 1 byte e pode representar um caractere alfabético, numérico ou especial.
```
char letra = 'A';
```

### 4. Lógico
São usadas para armazenar valores booleanos, ou seja, valores que representam verdadeiro ou falso.
```
#include <stdbool.h>

bool verdadeiro = true;
bool falso = false;
```

### 5. Constante
É utilizada para representar informações fixas e imutáveis. A principal característica de uma constante é que seu valor é definido uma vez e permanece inalterado ao longo da execução do programa.
A utilização de constantes é útil em programação por diversos motivos:
- Legibilidade do código
- Evita erros
- Facilita a alteração
  
```
const int NUMERO_MAXIMO = 100;
```

## Laços de Repetição
### 1. For
Permite executar um bloco de código repetidamente enquanto uma condição específica for verdadeira. É especialmente útil quando se sabe exatamente quantas vezes um bloco de código precisa ser executado.
```
for (inicialização; condição; incremento/decremento) {
    
}
```

Por exemplo, um loop for que imprime os números de 1 a 5 pode ser escrito da seguinte forma:
```
#include <stdio.h>

int main() {
    int i;

    // Inicia i com 1; continua enquanto i for menor ou igual a 5; incrementa i em 1 a cada iteração
    for (i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }

    return 0;
}
```

### 2. While
É uma estrutura de controle de fluxo que permite executar repetidamente um bloco de código enquanto uma condição específica for verdadeira.
A condição é avaliada antes de cada execução do bloco de código dentro do loop. Se a condição for verdadeira, o bloco de código é executado. Se for falsa, a execução do loop é interrompida e o controle passa para a próxima instrução após o loop.
O while é muito flexível e pode ser usado em situações em que o número de iterações não é conhecido antecipadamente ou pode variar durante a execução do programa.
```
while (condição) {
    
}
```

Um exemplo simples de uso do while em C é um programa que imprime os números de 1 a 5:
```
#include <stdio.h>

int main() {
    int i = 1;

    // O loop continuará enquanto i for menor ou igual a 5
    while (i <= 5) {
        printf("%d\n", i);
        i++; // Incrementa i para evitar um loop infinito
    }

    return 0;
}
```

### 3. Do-while
É uma estrutura de controle de repetição similar ao while, mas com uma diferença fundamental: o bloco de código dentro do do-while **é executado pelo menos uma vez**, mesmo que a condição especificada seja falsa.
```
do {
    
} while (condição);
```

Aqui está um exemplo simples de um programa que solicita ao usuário um número maior que 10 usando um loop do-while:
```
#include <stdio.h>

int main() {
    int numero;

    do {
        printf("Digite um numero maior que 10: ");
        scanf("%d", &numero);
    } while (numero <= 10);

    printf("Voce digitou %d, que e maior que 10. Obrigado!\n", numero);

    return 0;
}
```

## Estruturas de Decisão
São fundamentais para controlar o fluxo do programa com base em condições específicas. 
### 1. If
Permite executar um bloco de código se uma condição especificada for verdadeira.
Se a condição for verdadeira, o bloco de código dentro do if é executado. Se a condição for falsa, o bloco de código é ignorado e a execução continua na próxima instrução após o if.
```
if (condição) {
    
}
```
A estrutura *else* é usada para executar um bloco de código se todas as condições anteriores forem falsas. Ela é opcional e só pode ser usada após um if ou else if.
```
    if (condição) {
        // bloco de código a ser executado se a condição for verdadeira
    } else {
        // bloco de código a ser executado se a condição for falsa
    }
```
A estrutura *else if* é usada em conjunto com if para verificar múltiplas condições. 
Ela permite testar uma série de condições em sequência e executar o bloco de código associado à primeira condição verdadeira encontrada. 
O *else if* permite testar uma condição apenas se as condições anteriores forem falsas.
```
if (condição1) {
    // bloco de código a ser executado se a condição1 for verdadeira
} else if (condição2) {
    // bloco de código a ser executado se a condição2 for verdadeira
} else {
    // bloco de código a ser executado se nenhuma das condições anteriores for verdadeira
}
```

Exemplo de uso do if:
```
#include <stdio.h>

int main() {
    int numero = 10;

    if (numero > 0) {
        printf("O numero e positivo.\n");
    } else if (numero == 0) {
        printf("O numero e zero.\n");
    } else {
        printf("O numero e negativo.\n");
    }

    return 0;
}
```

### 2. Switch
Permite escolher entre vários blocos de código para execução, com base no valor de uma expressão ou variável. 
É útil quando se tem uma expressão com múltiplos casos e é necessário executar diferentes blocos de código com base nesses casos.
Ele é mais eficiente e legível do que uma série de if-else if quando se trata de muitos casos.
```
switch (expressao) {
    case valor1:
        // bloco de código a ser executado se expressao == valor1
        break;
    case valor2:
        // bloco de código a ser executado se expressao == valor2
        break;
    default:
        // bloco de código a ser executado se nenhum dos casos anteriores for verdadeiro
}
```
- expressao é uma expressão ou variável cujo valor será testado.
- valor1, valor2, etc., são os possíveis valores que expressao pode assumir.
- Cada *case* é seguido por um bloco de código a ser executado se expressao for igual a esse valor.
- A palavra-chave *break* é usada para sair do switch após a execução do bloco de código associado a um *case*. Se não houver um *break*, a execução continuará para os *case* subsequentes até encontrar um *break* ou o final do switch.
- O bloco *defaul*t é opcional e é executado se nenhum dos case corresponder ao valor da expressao.

Aqui está um exemplo simples de uso do switch para determinar o dia da semana com base em um número fornecido:
```
#include <stdio.h>

int main() {
    int dia;

    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &dia);

    switch (dia) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terca-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sabado\n");
            break;
        default:
            printf("Numero invalido!\n");
    }

    return 0;
}
```

## Operadores
São símbolos especiais que representam operações sobre variáveis e valores. Eles são fundamentais para realizar cálculos, comparações e manipulações de dados em um programa.
### 1. Aritméticos
Realizam operações matemáticas básicas, como adição, subtração, multiplicação, divisão e módulo (resto da divisão).
```
int a = 10;
int b = 20;
int soma = a + b; // Adição
int subtracao = a - b; // Subtração
int multiplicacao = a * b; // Multiplicação
int divisao = b / a; // Divisão
int resto = b % a; // Módulo (resto da divisão)
```
### 2. Lógicos
Realizam operações lógicas entre expressões booleanas e retornam verdadeiro ou falso.
```
int a = 10;
int b = 20;
if (a > 0 && b > 0) // AND lógico
if (a > 0 || b > 0) // OR lógico
if (!(a > 0)) // NOT lógico
```

### 3. Relacionais ou de Comparação
Realizam comparações entre valores e retornam verdadeiro ou falso (1 ou 0).
```
int a = 10;
int b = 20;
if (a == b) // Igualdade
if (a != b) // Diferença
if (a > b) // Maior que
if (a < b) // Menor que
if (a >= b) // Maior ou igual a
if (a <= b) // Menor ou igual a
```

### 4. Atribuição
Atribuem valores a variáveis.
```
int x;
x = 10; // Atribuição do valor 10 à variável x
```

### 5. Incremento/Decremento
Incrementam ou decrementam o valor de uma variável.
```
int x = 10;
x++; // Incremento de 1 em x
x--; // Decremento de 1 em x
```
