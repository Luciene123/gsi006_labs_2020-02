#include <stdio.h>

int main() {
    printf("<< Aumento Salarial >>\n");
    float n,atual;    
    printf(" Digite o valor do salário R$:\n");
    scanf("%f",&n);
    atual= n + ((n*25)/100);
    printf("O valor do salario de: %f depois de corrigido em 25%% fica em: %f",n,atual);
    system("pause");
    return 0;
}

/*
=> Ler quatro notas e mostrar as notas e a média aritmética obtida.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Aumento Salarial >>
Digite o valor do salario R$: 4000
Apos 25% de aumento o salario fica em R$ 5000.00
-------------------------------------------------------------------------------
*/