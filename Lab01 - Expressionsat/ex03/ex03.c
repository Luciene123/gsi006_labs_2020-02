#include <stdio.h>

int main() {
    printf("<< Sucessor e Antecessor >>\n");
     float n, antecessor, sucessor;
    printf("Digite um numero real");
    scanf("%f", &n);
    antecessor=n-1;
    sucessor=n+1;
    printf("<<Numero:%f, seu antecessor:%f, e seu sucessor:%f>>",n,antecessor,sucessor);
    return 0;
}

/*
=> Ler um número e retorne seu antecessor e seu sucessor.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Sucessor e Antecessor >>
Digite um numero: 2

Antecessor: 1
Numero: 2
Sucessor: 3
-------------------------------------------------------------------------------
*/