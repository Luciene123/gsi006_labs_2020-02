#include <stdio.h>

int main() {
    printf("== Troca do conteudo de variaveis ==\n");
    float n1,n2, auxiliar;    
    printf("Digite um numero real");
    scanf("%f", &n1);
    printf("Digite um numero real");
    scanf("%f", &n2);
    auxiliar=n1;
    n1=n2;
    n2=auxiliar;    
    return 0;
}

/*
=> Faça um algoritmo que leia o valor de duas variáveis A e B e 
troque os valores dessas variáveis.

-------------------------------------------------------------------------------
Exemplo de saída:

== Troca do conteudo de variaveis ==
Entre com o valor de A: 5
Entre com o valor de B: 6
Apos a troca, o valor de A eh 6 e o de B eh 5
-------------------------------------------------------------------------------
*/